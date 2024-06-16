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
#include "Kismet/GameplayStatics.h"


#include "EngineUtils.h"


DEFINE_LOG_CATEGORY(LogTemplateCharacter);
FColor pink{ 255,182,193 };
FColor blue{ 173,216,230 };
FColor violet{ 198,181,237 };
FColor lemon{ 254,255,153 };

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
		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"[BeginPlay] MySaveGameInstance is empty, thus create a new one.");
		CreateSaveGameInstance();
	}
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
			if(!currentSoil->bIsPlanted && currentSoil->Text3D->GetText().IsEmpty()) return;
			if (!currentSoil->bIsPlanted && !currentSoil->Text3D->GetText().IsEmpty()) return;

			currentSoil->bIsPlanted = false;
			currentSoil->PlantMesh->SetStaticMesh(nullptr);

			GetWorld()->GetTimerManager().ClearTimer(currentSoil->MeshChangeTimerHandle);

			if (!currentSoil->Text3D->GetText().IsEmpty()) {
				currentSoil->Text3D->SetText(FText::FromString(FString("")));
				return;
			}

			// Change Seeds/Crops Amount
			else {
				++SeedsAmount[currentSoil->CurrentPlant];
				++CropsEarned[currentSoil->CurrentPlant];

				AutoSave(currentSoil->CurrentPlant);
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
			FText tx = temp->Text3D->GetText();

			// Crop is mature
			if(temp->bIsPlanted && tx.IsEmpty()){
				temp->PlantMesh->SetStaticMesh(temp->EarnedMeshes[temp->CurrentPlant]);
				if (temp->CurrentPlant == 1)  // Eggplant
					temp->PlantMesh->SetRelativeLocation(FVector{ 0,0,25 });
			}
		}
	}
}




void AFarmerCharacter::EndPlay(const EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);

	if (MySaveGameInstance) {
		MySaveGameInstance->PlayerLocation = this->GetActorLocation();
		MySaveGameInstance->PlayerRotation = this->GetActorRotation();
		UGameplayStatics::SaveGameToSlot(MySaveGameInstance, TEXT("PlayerSaveSlot"), 0);

		// 06.13
		SaveGame();
	}
}



void AFarmerCharacter::CreateSaveGameInstance() noexcept
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
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "[CreateSaveGameInstance] Empty array, thus create a new array.");

			//MySaveGameInstance->PlayerLocation = FVector(1000, 1000, 100);

			for (int32 i = 0; i < CropsEarned.Num(); ++i) {
				MySaveGameInstance->EarnedCrops.Add(CropsEarned[i]);
			}
		}
	}
	//SaveGame();
	UGameplayStatics::SaveGameToSlot(MySaveGameInstance, TEXT("PlayerSaveSlot"), 0);
}

void AFarmerCharacter::LoadGameIfExist() noexcept
{
	if (UGameplayStatics::DoesSaveGameExist(TEXT("PlayerSaveSlot"), 0))
	{
		SaveGameInstance = UGameplayStatics::LoadGameFromSlot(TEXT("PlayerSaveSlot"), 0);
		MySaveGameInstance = Cast<UMySaveGame>(SaveGameInstance);


		if (MySaveGameInstance)
		{
			// Load Player Pose & UI Data
			this->SetActorLocationAndRotation(MySaveGameInstance->PlayerLocation, MySaveGameInstance->PlayerRotation);
			int length = MySaveGameInstance->EarnedCrops.Num();
			if (CropsEarned.Num() != length) {
				GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "[LoadGameIfExist]: Slot is invalid, thus won't load.");
				return;
			}
			for (int32 i = 0; i < length; ++i) {
				CropsEarned[i] = MySaveGameInstance->EarnedCrops[i];
			}
			
			// Load Soil & Plant
			LoadGame();
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "[LoadGameIfExist]: No old saved slots exists.");
	}

}

void AFarmerCharacter::AutoSave(int32& index) noexcept
{						
	if (MySaveGameInstance) {
		MySaveGameInstance->EarnedCrops[index] = CropsEarned[index];
		UGameplayStatics::SaveGameToSlot(MySaveGameInstance, TEXT("PlayerSaveSlot"), 0);
		GEngine->AddOnScreenDebugMessage(-1, INFINITY, pink, "[AutoSave] Saved UI Data successfully.");

		SaveGame();
	}
}



void AFarmerCharacter::SaveGame() noexcept
{
	TArray<AActor*> Soils;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASoil::StaticClass(), Soils);
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, FString::Printf(TEXT("[SaveGame] World #Soils: %d"), Soils.Num()));
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, FString::Printf(TEXT("[SaveGame] Slot #Soils BEFORE: %d"), MySaveGameInstance->SoilAndPlants.Num()));
	MySaveGameInstance->SoilAndPlants.Empty(0);
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, FString::Printf(TEXT("[SaveGame] Slot #Soils AFTER: %d"), MySaveGameInstance->SoilAndPlants.Num()));

	// TODO: Create new TArray and replace the old.
	for (AActor* it : Soils) {
		if (!it) {
			GEngine->AddOnScreenDebugMessage(-1,INFINITY,pink,"[SaveGame] AActor is empty!");
			continue;
		}

		ASoil* cs = Cast<ASoil>(it);
		if (!cs) { 
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, pink, "[SaveGame] ASoil is empty!");
			continue; 
		}	
		
		if (!cs->SoilMesh->GetStaticMesh()) continue;
		if (!cs->PlantMesh->GetStaticMesh()) continue;

		FSoilData sp;
		sp.SoilTF = cs->SoilMesh->GetRelativeTransform();
		sp.SoilMeshPath = cs->SoilMesh->GetStaticMesh()->GetPathName();

		sp.PlantTF = cs->PlantMesh->GetRelativeTransform();
		sp.PlantMeshPath = cs->PlantMesh->GetStaticMesh()->GetPathName();
		sp.GrowStage = cs->GrowStage;
		sp.CurrentPlant = cs->CurrentPlant;

		sp.Text3DContent = cs->Text3D->GetText();
		sp.Text3DTF = cs->Text3D->GetRelativeTransform();
		sp.RemainTime = cs->RemainTime;

		MySaveGameInstance->SoilAndPlants.Emplace(sp);		
		// Save
		if (UGameplayStatics::SaveGameToSlot(MySaveGameInstance, TEXT("PlayerSaveSlot"), 0)) {
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, pink, FString::Printf(TEXT("[SaveGame] saved #soils: %d"), MySaveGameInstance->SoilAndPlants.Num()));
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, pink, "Failed!");
		}
	}

}

void AFarmerCharacter::LoadGame() noexcept
{
	if (!MySaveGameInstance || MySaveGameInstance->SoilAndPlants.IsEmpty()) return;
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, blue, FString::Printf(TEXT("[LoadGame] loaded #soils: %d"), MySaveGameInstance->SoilAndPlants.Num()));

	
	for (const FSoilData& cs : MySaveGameInstance->SoilAndPlants)
	{
		// Create ASoil Instance & load Soil SCM
		if (cs.SoilMeshPath.IsEmpty()) continue;
		ASoil* CurrentActor = GetWorld()->SpawnActor<ASoil>(ASoil::StaticClass());

		CurrentActor->SoilMesh->SetRelativeTransform(cs.SoilTF);
		UStaticMesh* SoilSM = LoadObject<UStaticMesh>(CurrentActor, *cs.SoilMeshPath);
		CurrentActor->SoilMesh->SetStaticMesh(SoilSM);		



		// Plant SCM
		if (cs.PlantMeshPath.IsEmpty()) continue;
		CurrentActor->PlantMesh->SetRelativeTransform(cs.PlantTF);

		UStaticMesh* PlantSM = LoadObject<UStaticMesh>(CurrentActor, *cs.PlantMeshPath);
		CurrentActor->PlantMesh->SetStaticMesh(PlantSM);
		CurrentActor->GrowStage = cs.GrowStage;
		CurrentActor->CurrentPlant = cs.CurrentPlant;



		// Timer 
		CurrentActor->RemainTime = cs.RemainTime;
		if (cs.RemainTime >= 0.0f)
		{
			FTimerDelegate TimerDelegate;
			//TimerDelegate.BindUFunction(CurrentActor, FName("ChangeMesh"), CurrentActor->MeshMap[static_cast<EPlants>(CurrentActor->CurrentPlant)], CurrentActor->GetActorTransform().GetScale3D(), CurrentActor->GetActorTransform().GetLocation());
			TimerDelegate.BindUFunction(CurrentActor, FName("ChangeMesh"), CurrentActor->MeshMap[static_cast<EPlants>(CurrentActor->CurrentPlant)], cs.PlantTF.GetScale3D(), cs.PlantTF.GetLocation());

			GetWorld()->GetTimerManager().SetTimer(CurrentActor->MeshChangeTimerHandle, TimerDelegate, cs.RemainTime, true);
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, "[LoadGame] Recovered the Timer");
		}

		// Text3D
		CurrentActor->Text3D->SetRelativeTransform(cs.Text3DTF);
		CurrentActor->Text3D->SetText(cs.Text3DContent);

		GEngine->AddOnScreenDebugMessage(-1,INFINITY,blue,cs.PlantMeshPath);
	}
}



