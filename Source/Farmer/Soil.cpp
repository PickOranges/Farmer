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
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh3(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_normal_01.SM_potato_normal_02'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh4(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_normal_01.SM_potato_normal_01'"));

	if (PotatoMesh1.Succeeded()) potatoMeshes.Emplace(PotatoMesh1.Object);
	if (PotatoMesh2.Succeeded()) potatoMeshes.Emplace(PotatoMesh2.Object);
	if (PotatoMesh3.Succeeded()) potatoMeshes.Emplace(PotatoMesh3.Object);
	if (PotatoMesh4.Succeeded()) potatoMeshes.Emplace(PotatoMesh4.Object);

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
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}
				UStaticMesh* tempMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_small.SM_potato_small'"));
				if (tempMesh) {
					plantMesh->SetStaticMesh(tempMesh);
					plantMesh->SetRelativeLocation(FVector{ 0,0,10 });
				}
				GrowPotato();
			}
			break;
			case 1:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}
				UStaticMesh* tempMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_normal.SM_eggplant_normal'"));
				if (tempMesh) {
					plantMesh->SetStaticMesh(tempMesh);
					plantMesh->SetRelativeScale3D(FVector{ 0.5,0.5,0.5 });
				}
			}
			break;
			case 2:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}
				UStaticMesh* tempMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_normal_01.SM_carrot_normal_01'"));
				if (tempMesh) {
					plantMesh->SetStaticMesh(tempMesh);
					plantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
				}
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
	GetWorld()->GetTimerManager().SetTimer(MeshChangeTimerHandle, this, &ASoil::ChangePotatoMesh, 5.0f, true);
}

void ASoil::ChangePotatoMesh()
{
	if (potatoMeshes.Num() > 0 && plantMesh) {
		potatoIdx = (potatoIdx+1) % potatoMeshes.Num();		
		plantMesh->SetStaticMesh(potatoMeshes[potatoIdx]);
		plantMesh->SetRelativeScale3D(FVector{0.7,0.7,0.7});
	}
	if (potatoIdx == potatoMeshes.Num()-1) {
		GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle);
	}
}
