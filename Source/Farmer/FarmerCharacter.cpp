// Copyright Epic Games, Inc. All Rights Reserved.

#include "FarmerCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Components/CapsuleComponent.h"
#include "Soil.h"
#include "MySaveGame.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AFarmerCharacter

AFarmerCharacter::AFarmerCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	BoundingBox=CreateDefaultSubobject<UBoxComponent>(TEXT("BB"));
	BoundingBox->SetupAttachment(RootComponent);
	BoundingBox->SetBoxExtent(FVector{50.f,50,50});
	BoundingBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoundingBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	BoundingBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	BoundingBox->SetGenerateOverlapEvents(true);
	BoundingBox->OnComponentBeginOverlap.AddDynamic(this, &AFarmerCharacter::OnBeginOverlapCB);
}

void AFarmerCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
			Subsystem->AddMappingContext(IMC_Custom, 0);
		}
	}

	// Seeds Inventory
	SeedsInventoryClass= LoadClass<UCropSeedsUserWidget>(nullptr, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UMG_CropsUI.UMG_CropsUI_C'"));
	SeedsInventory = CreateWidget<UCropSeedsUserWidget>(GetWorld(), SeedsInventoryClass);
	if (SeedsInventory) {
		SeedsInventory->AddToViewport();
		//GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "Successfully added SeedsInventory to Viewport!");
	}


	LoadGameIfExist();
	if (!MySaveGameInstance) {
		CreateSaveGameInstance();
	}
}

void AFarmerCharacter::EndPlay(const EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);

	if (MySaveGameInstance) {
		MySaveGameInstance->PlayerLocation = this->GetActorLocation();
		MySaveGameInstance->PlayerRotation = this->GetActorRotation();
	}
	UGameplayStatics::SaveGameToSlot(MySaveGameInstance, TEXT("PlayerSaveSlot1"), 0);
}

void AFarmerCharacter::Activate()
{
	GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"Activate()");
}

void AFarmerCharacter::PlantSeed()
{
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "PlantSeed()");
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFarmerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFarmerCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFarmerCharacter::Look);

		// Bind Custom Input Actions
		EnhancedInputComponent->BindAction(IA_EAction, ETriggerEvent::Triggered, this, &AFarmerCharacter::PressE);
		EnhancedInputComponent->BindAction(IA_QAction, ETriggerEvent::Triggered, this, &AFarmerCharacter::PressQ);
		EnhancedInputComponent->BindAction(IA_WheelUp, ETriggerEvent::Triggered, this, &AFarmerCharacter::OnWheelUp);
		EnhancedInputComponent->BindAction(IA_WheelDown, ETriggerEvent::Triggered, this, &AFarmerCharacter::OnWheelDown);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AFarmerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AFarmerCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AFarmerCharacter::PressE(const FInputActionValue& Value)
{
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Blue,"Keyboard input: E.");
	bool isHit;
	FHitResult Result;
	RayCast(isHit, Result);
	if (isHit) {
		ASoil* currentSoil = Cast<ASoil>(Result.GetActor());
		if (currentSoil) {
			if(!currentSoil->bIsPlanted && currentSoil->text3D->GetText().IsEmpty()) return;
			if (!currentSoil->bIsPlanted && !currentSoil->text3D->GetText().IsEmpty()) return;

			currentSoil->bIsPlanted = false;
			currentSoil->plantMesh->SetStaticMesh(nullptr);

			GetWorld()->GetTimerManager().ClearTimer(currentSoil->MeshChangeTimerHandle1);
			GetWorld()->GetTimerManager().ClearTimer(currentSoil->MeshChangeTimerHandle2);
			GetWorld()->GetTimerManager().ClearTimer(currentSoil->MeshChangeTimerHandle3);

			if (!currentSoil->text3D->GetText().IsEmpty()) {
				currentSoil->text3D->SetText(FText::FromString(FString("")));
				return;
			}

			// Change Seeds/Crops Amount
			else {
				++SeedsAmount[currentSoil->currentPlant];
				++CropsEarned[currentSoil->currentPlant];

				AutoSave(currentSoil->currentPlant);
			}
		}


	}
}

void AFarmerCharacter::PressQ(const FInputActionValue& Value)
{
	//GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, "Keyboard input: Q.");
	bool isHit;
	FHitResult Result;
	RayCast(isHit, Result);
	if (isHit) {
		ASoil* currentSoil = Cast<ASoil>(Result.GetActor());
		if (currentSoil && SeedsAmount[Seeds]>0) {
			if(!currentSoil->bIsPlanted){
				currentSoil->PlantSeed();
				--SeedsAmount[Seeds];
			}
		}
	}
}

void AFarmerCharacter::OnWheelUp(const FInputActionValue& Value)
{
	Seeds += (int32)Value.Get<float>();
	Seeds = FMath::Clamp(Seeds, 0, 2);
	if (SeedsInventory) {
		SeedsInventory->SelectButton(Seeds);
	}
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Yellow,FString::FromInt(Seeds));
}

void AFarmerCharacter::OnWheelDown(const FInputActionValue& Value)
{
	Seeds += (int32)Value.Get<float>();
	Seeds = FMath::Clamp(Seeds, 0, 2);
	if (SeedsInventory) {
		SeedsInventory->SelectButton(Seeds);
	}
	//GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Yellow, FString::FromInt(Seeds));
}

void AFarmerCharacter::RayCast(bool& bHit, FHitResult& HitResult)
{
	FVector Start = FollowCamera->GetComponentLocation();
	FVector Dir = FollowCamera->GetForwardVector();
	FVector End = Start + Dir * 2000.f;
	bHit = GetWorld()->LineTraceSingleByChannel(HitResult,Start,End,ECC_Visibility);
}

void AFarmerCharacter::OnBeginOverlapCB(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Begin Overlapping with: %s"), *OtherActor->GetName()));
	
	// placed a matured crop on the soil
	if (OtherActor) {
		if (ASoil* temp = Cast<ASoil>(OtherActor)) {
			FText tx = temp->text3D->GetText();

			// Crop is mature
			if(temp->bIsPlanted && tx.IsEmpty()){
				temp->plantMesh->SetStaticMesh(temp->EarnedMeshes[temp->currentPlant]);
				if (temp->currentPlant == 1)  // Eggplant
					temp->plantMesh->SetRelativeLocation(FVector{ 0,0,25 });
			}
		}
	}
}

//void AFarmerCharacter::TriggerFeed()
//{
//	FeedDelegate.Execute();
//}


void AFarmerCharacter::CreateSaveGameInstance()
{
	// Auto Game Save Test
	// Details of Saving in PressE()
	SaveGameInstance = UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass());
	if (SaveGameInstance) {
		MySaveGameInstance = Cast<UMySaveGame>(SaveGameInstance);
	}

	if (MySaveGameInstance) {
		// create & init for auto saving
		if (MySaveGameInstance->EarnedCrops.Num() == 0) {
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "Empty array, thus create a new array.");
			for (int32 i = 0; i < CropsEarned.Num(); ++i) {
				MySaveGameInstance->EarnedCrops.Add(CropsEarned[i]);
			}
		}
	}

	UGameplayStatics::SaveGameToSlot(MySaveGameInstance, TEXT("PlayerSaveSlot1"), 0);
}

void AFarmerCharacter::LoadGameIfExist()
{
	//Loading Test
	if (UGameplayStatics::DoesSaveGameExist(TEXT("PlayerSaveSlot1"), 0))
	{
		SaveGameInstance = UGameplayStatics::LoadGameFromSlot(TEXT("PlayerSaveSlot1"), 0);
		MySaveGameInstance = Cast<UMySaveGame>(SaveGameInstance);
		if (MySaveGameInstance)
		{
			int length = MySaveGameInstance->EarnedCrops.Num();
			if (CropsEarned.Num() != length) {
				GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Yellow, "Record is invalid, thus won't load.");
				return;
			}
			for (int32 i = 0; i < length; ++i) {
				CropsEarned[i] = MySaveGameInstance->EarnedCrops[i];
			}
			
			if (MySaveGameInstance->PlayerLocation == FVector::ZeroVector) return;
			this->SetActorLocationAndRotation(MySaveGameInstance->PlayerLocation, MySaveGameInstance->PlayerRotation);
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Yellow, "No old saved slots exists.");
	}
}

void AFarmerCharacter::AutoSave(int32& index)
{						
	if (MySaveGameInstance) {
		/*int32& idx = currentSoil->currentPlant;*/
		MySaveGameInstance->EarnedCrops[index] = CropsEarned[index];
		GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "Auto saving successfully.");
	}
	UGameplayStatics::SaveGameToSlot(MySaveGameInstance, TEXT("PlayerSaveSlot1"), 0);
}

