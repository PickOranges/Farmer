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
	if (MeshChangeTimerHandle1.IsValid()) {
		remainTime = GetWorld()->GetTimerManager().GetTimerRemaining(MeshChangeTimerHandle1);
		text3D->SetText(FText::FromString(FString::FromInt((int32)remainTime)));
	}
	else if (MeshChangeTimerHandle2.IsValid()) {
		remainTime = GetWorld()->GetTimerManager().GetTimerRemaining(MeshChangeTimerHandle2);
		text3D->SetText(FText::FromString(FString::FromInt((int32)remainTime)));
	}
	else if (MeshChangeTimerHandle3.IsValid()) {
		remainTime = GetWorld()->GetTimerManager().GetTimerRemaining(MeshChangeTimerHandle3);
		text3D->SetText(FText::FromString(FString::FromInt((int32)remainTime)));
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
				GrowPotato();
			}
			break;
			case 1:
			{
				GrowEggplant();
			}
			break;
			case 2:
			{
				GrowCarrot();
			}
			break;
			}
		}
		
		bIsPlanted = true;
	}
	else {
		
	}
}

void ASoil::GrowPotato()
{
	if (potatoMeshes.Num() > 0) {
		plantMesh->SetStaticMesh(potatoMeshes[0]);
		plantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
		plantMesh->SetRelativeLocation(FVector{ 0,0,12 });
	}
	GetWorld()->GetTimerManager().SetTimer(MeshChangeTimerHandle1, this, &ASoil::ChangePotatoMesh, 6.0f, true);
}

void ASoil::GrowEggplant()
{
	if (eggplantMeshes.Num() > 0) {
		plantMesh->SetStaticMesh(eggplantMeshes[0]);
		plantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
		plantMesh->SetRelativeLocation(FVector{ 0,0,10 });
	}
	GetWorld()->GetTimerManager().SetTimer(MeshChangeTimerHandle2, this, &ASoil::ChangeEggplantMesh, 6.0f, true);
}

void ASoil::GrowCarrot()
{
	if (carrotMeshes.Num() > 0) {
		plantMesh->SetStaticMesh(carrotMeshes[0]);
		plantMesh->SetRelativeScale3D(FVector{ 1,1,1 });
		plantMesh->SetRelativeLocation(FVector{ 0.0,0.0,12 });
	}
	GetWorld()->GetTimerManager().SetTimer(MeshChangeTimerHandle3, this, &ASoil::ChangeCarrotMesh, 6.0f, true);
}

void ASoil::ChangePotatoMesh()
{
	if (potatoMeshes.Num() > 0 && plantMesh) {
		potatoIdx = (potatoIdx+1) % potatoMeshes.Num();		
		plantMesh->SetStaticMesh(potatoMeshes[potatoIdx]);
		plantMesh->SetRelativeScale3D(FVector{0.7,0.7,0.7});
		plantMesh->SetRelativeLocation(FVector{ 0,0,12 });
	}
	if (potatoIdx == potatoMeshes.Num()-1) {
		GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle1);
		potatoIdx = 0;
	}
}

void ASoil::ChangeEggplantMesh()
{
	if (eggplantMeshes.Num() > 0 && plantMesh) {
		eggplantIdx = (eggplantIdx+1) % eggplantMeshes.Num();
		plantMesh->SetStaticMesh(eggplantMeshes[eggplantIdx]);
		plantMesh->SetRelativeScale3D(FVector{ 0.4,0.4,0.4 });
	}
	if (eggplantIdx == eggplantMeshes.Num() - 1) {
		GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle2);
		eggplantIdx = 0;
	}
}

void ASoil::ChangeCarrotMesh()
{
	if (carrotMeshes.Num() > 0 && plantMesh) {
		carrotIdx = (carrotIdx+1) % carrotMeshes.Num();
		plantMesh->SetStaticMesh(carrotMeshes[carrotIdx]);
		plantMesh->SetRelativeScale3D(FVector{ 1,1,1 });
		plantMesh->SetRelativeLocation(FVector{ 0.0,0.0,12 });
	}
	if (carrotIdx == carrotMeshes.Num() - 1) {
		GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle3);
		carrotIdx = 0;
	}
}