// Fill out your copyright notice in the Description page of Project Settings.

#include "Soil.h"
#include "Interactable.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"


ASoil::ASoil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SoilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoilMesh"));
	PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	Text3D = CreateDefaultSubobject<UText3DComponent>(TEXT("SoilText"));
	RootComponent = SoilMesh;
	Text3D->SetupAttachment(SoilMesh);
	PlantMesh->SetupAttachment(SoilMesh);
	PlantMesh->SetRelativeLocation(FVector{0,0,5.5});

	static ConstructorHelpers::FObjectFinder<UStaticMesh> tempMesh(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_crate_02.SM_crate_02'"));
	SoilMesh->SetStaticMesh(tempMesh.Object);
	SoilMesh->SetWorldScale3D(FVector{5,5,5});

	Text3D->SetText(FText::FromString(""));
	Text3D->SetRelativeLocation(FVector(0.0f, 0.0f, 40.f));
	Text3D->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	Text3D->SetRelativeScale3D(FVector{0.3,0.3,0.3});

	// TODO 1: Move all of the meshes into character class.
	// TODO 2: Make a Template Class for all plants/crops.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh1(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_small.SM_potato_small'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh2(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_medium.SM_potato_medium'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh3(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_normal_01.SM_potato_normal_01'"));

	if (PotatoMesh1.Succeeded()) PotatoMeshes.Emplace(PotatoMesh1.Object);
	if (PotatoMesh2.Succeeded()) PotatoMeshes.Emplace(PotatoMesh2.Object);
	if (PotatoMesh3.Succeeded()) PotatoMeshes.Emplace(PotatoMesh3.Object);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> eggplantMesh1(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_small.SM_eggplant_small'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> eggplantMesh2(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_medium.SM_eggplant_medium'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> eggplantMesh3(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_normal.SM_eggplant_normal'"));

	if (eggplantMesh1.Succeeded()) EggplantMeshes.Emplace(eggplantMesh1.Object);
	if (eggplantMesh2.Succeeded()) EggplantMeshes.Emplace(eggplantMesh2.Object);
	if (eggplantMesh3.Succeeded()) EggplantMeshes.Emplace(eggplantMesh3.Object);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> carrotMesh1(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_small.SM_carrot_small'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> carrotMesh2(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_medium.SM_carrot_medium'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> carrotMesh3(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_normal_01.SM_carrot_normal_01'"));

	if (carrotMesh1.Succeeded()) CarrotMeshes.Emplace(carrotMesh1.Object);
	if (carrotMesh2.Succeeded()) CarrotMeshes.Emplace(carrotMesh2.Object);
	if (carrotMesh3.Succeeded()) CarrotMeshes.Emplace(carrotMesh3.Object);


	static ConstructorHelpers::FObjectFinder<UStaticMesh> EarnedPotato(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_01.SM_potato_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EarnedEggplant(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_01.SM_eggplant_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EarnedCarrot(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_01.SM_carrot_01'"));
	if (EarnedPotato.Succeeded()) EarnedMeshes.Emplace(EarnedPotato.Object);
	if (EarnedEggplant.Succeeded()) EarnedMeshes.Emplace(EarnedEggplant.Object);
	if (EarnedCarrot.Succeeded()) EarnedMeshes.Emplace(EarnedCarrot.Object);

	MeshMap.Emplace(EPlants::Potato, PotatoMeshes);
	MeshMap.Emplace(EPlants::Eggplant, EggplantMeshes);
	MeshMap.Emplace(EPlants::Carrot, CarrotMeshes);
}

void ASoil::BeginPlay()
{
	Super::BeginPlay();
}



void ASoil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (MeshChangeTimerHandle.IsValid()) {
		RemainTime = GetWorld()->GetTimerManager().GetTimerRemaining(MeshChangeTimerHandle);
		Text3D->SetText(FText::FromString(FString::FromInt((int32)RemainTime)));
	}
	else {
		Text3D->SetText(FText::FromString(FString("")));
	}
}

void ASoil::PlantSeed_Implementation()
{
	if (!bIsPlanted) {
		AFarmerCharacter* myCharacter = Cast<AFarmerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (myCharacter) {
			GrowCrop(MeshMap[static_cast<EPlants>(myCharacter->Seeds)], FVector(0.7, 0.7, 0.7), FVector(0, 0, 12));
			CurrentPlant = myCharacter->Seeds;
			bIsPlanted = true;
		}		
	}
}

void ASoil::GrowCrop(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location)
{
	if (Meshes.Num() > 0) {
		PlantMesh->SetStaticMesh(Meshes[0]);
		PlantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
		PlantMesh->SetRelativeLocation(FVector{ 0,0,12 });
	}

	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUFunction(this, FName("ChangeMesh"), Meshes, Scale, Location);
	
	GetWorld()->GetTimerManager().SetTimer(MeshChangeTimerHandle, TimerDelegate, 6.0f, true);
}

void ASoil::ChangeMesh(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location)
{
	if (Meshes.Num() > 0 && PlantMesh) {
		GrowStage = (GrowStage + 1) % Meshes.Num();
		PlantMesh->SetStaticMesh(Meshes[GrowStage]);
		PlantMesh->SetRelativeScale3D(Scale);
		PlantMesh->SetRelativeLocation(Location);
	}
	if (GrowStage == Meshes.Num() - 1) {
		Text3D->SetText(FText::FromString(FString("")));

		GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle);
		GrowStage = 0;
	}
}

void ASoil::OnRemovePlant()
{
	bIsPlanted = false;
	bIsFruit = false;
	PlantMesh->SetStaticMesh(nullptr);

	GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle);

	if (!Text3D->GetText().IsEmpty()) {  // case 1: still not mature
		Text3D->SetText(FText::FromString(FString("")));
		return;
	}
}
