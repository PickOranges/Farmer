// Fill out your copyright notice in the Description page of Project Settings.


#include "Soil.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
ASoil::ASoil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	soilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoilMesh"));
	plantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	text3D = CreateDefaultSubobject<UText3DComponent>(TEXT("SoilText"));
	RootComponent = soilMesh;
	text3D->SetupAttachment(soilMesh);
	plantMesh->SetupAttachment(soilMesh);
	plantMesh->SetRelativeLocation(FVector{0,0,5.5});

	static ConstructorHelpers::FObjectFinder<UStaticMesh> tempMesh(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_crate_02.SM_crate_02'"));
	soilMesh->SetStaticMesh(tempMesh.Object);
	soilMesh->SetWorldScale3D(FVector{5,5,5});

	text3D->SetText(FText::FromString(""));
	text3D->SetRelativeLocation(FVector(0.0f, 0.0f, 40.f));
	text3D->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	text3D->SetRelativeScale3D(FVector{0.3,0.3,0.3});

	// TODO 1: Move all of the meshes into character class.
	// TODO 2: Make a Template Class for all plants/crops.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh1(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_small.SM_potato_small'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh2(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_medium.SM_potato_medium'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh3(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_normal_01.SM_potato_normal_01'"));

	if (PotatoMesh1.Succeeded()) potatoMeshes.Emplace(PotatoMesh1.Object);
	if (PotatoMesh2.Succeeded()) potatoMeshes.Emplace(PotatoMesh2.Object);
	if (PotatoMesh3.Succeeded()) potatoMeshes.Emplace(PotatoMesh3.Object);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> eggplantMesh1(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_small.SM_eggplant_small'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> eggplantMesh2(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_medium.SM_eggplant_medium'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> eggplantMesh3(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_normal.SM_eggplant_normal'"));

	if (eggplantMesh1.Succeeded()) eggplantMeshes.Emplace(eggplantMesh1.Object);
	if (eggplantMesh2.Succeeded()) eggplantMeshes.Emplace(eggplantMesh2.Object);
	if (eggplantMesh3.Succeeded()) eggplantMeshes.Emplace(eggplantMesh3.Object);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> carrotMesh1(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_small.SM_carrot_small'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> carrotMesh2(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_medium.SM_carrot_medium'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> carrotMesh3(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_normal_01.SM_carrot_normal_01'"));

	if (carrotMesh1.Succeeded()) carrotMeshes.Emplace(carrotMesh1.Object);
	if (carrotMesh2.Succeeded()) carrotMeshes.Emplace(carrotMesh2.Object);
	if (carrotMesh3.Succeeded()) carrotMeshes.Emplace(carrotMesh3.Object);


	static ConstructorHelpers::FObjectFinder<UStaticMesh> EarnedPotato(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_01.SM_potato_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EarnedEggplant(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_01.SM_eggplant_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EarnedCarrot(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_01.SM_carrot_01'"));
	if (EarnedPotato.Succeeded()) EarnedMeshes.Emplace(EarnedPotato.Object);
	if (EarnedEggplant.Succeeded()) EarnedMeshes.Emplace(EarnedEggplant.Object);
	if (EarnedCarrot.Succeeded()) EarnedMeshes.Emplace(EarnedCarrot.Object);
}

// Called when the game starts or when spawned
void ASoil::BeginPlay()
{
	Super::BeginPlay();
}

void ASoil::Activate()
{
}


// Called every frame
void ASoil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (MeshChangeTimerHandle.IsValid()) {
		RemainTime = GetWorld()->GetTimerManager().GetTimerRemaining(MeshChangeTimerHandle);
		text3D->SetText(FText::FromString(FString::FromInt((int32)RemainTime)));
	}
	else {
		text3D->SetText(FText::FromString(FString("")));
	}
}

void ASoil::PlantSeed()
{
	if (!bIsPlanted) {
		AFarmerCharacter* myCharacter = Cast<AFarmerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (myCharacter) {
			switch (myCharacter->Seeds)
			{
			default:
				break;
			break;
			case 0:
			{
				GrowCrop(potatoMeshes, FVector(0.7,0.7,0.7), FVector(0,0,12));
				currentPlant = myCharacter->Seeds;
			}
			break;
			case 1:
			{
				GrowCrop(eggplantMeshes, FVector(0.7, 0.7, 0.7), FVector(0,0,10));
				currentPlant = myCharacter->Seeds;
			}
			break;
			case 2:
			{
				GrowCrop(carrotMeshes, FVector::OneVector, FVector(0,0,12));
				currentPlant = myCharacter->Seeds;
			}
			break;
			}
		}
		
		bIsPlanted = true;
	}
}

void ASoil::GrowCrop(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location)
{
	if (Meshes.Num() > 0) {
		plantMesh->SetStaticMesh(Meshes[0]);
		plantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
		plantMesh->SetRelativeLocation(FVector{ 0,0,12 });
	}

	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUFunction(this, FName("ChangeMesh"), Meshes, Scale, Location);
	
	GetWorld()->GetTimerManager().SetTimer(MeshChangeTimerHandle, TimerDelegate, 6.0f, true);
}

void ASoil::ChangeMesh(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location)
{
	if (Meshes.Num() > 0 && plantMesh) {
		GrowStage = (GrowStage + 1) % Meshes.Num();
		plantMesh->SetStaticMesh(Meshes[GrowStage]);
		plantMesh->SetRelativeScale3D(Scale);
		plantMesh->SetRelativeLocation(Location);
	}
	if (GrowStage == Meshes.Num() - 1) {
		text3D->SetText(FText::FromString(FString("")));

		GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle);
		GrowStage = 0;
	}
}
