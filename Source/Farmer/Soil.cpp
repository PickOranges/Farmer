// Fill out your copyright notice in the Description page of Project Settings.


#include "Soil.h"
#include "Kismet/GameplayStatics.h"

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
	PlantSeed();
	GrowTime += DeltaTime;
	int32 tmp = GrowTime;
	if ((int32)tmp == 1 || tmp == 2 || tmp == 3 || tmp==4) ++cnt;
	if (GrowTime > 5) {
		GrowTime = 0;
		cnt = 0;
	}
}


void ASoil::PlantSeed()
{
	if (bIsPlanted) {
		//switch ((int32)GrowTime)
		//{
		//default:
		//	break;
		//case 1:
		//{

		//}
		//	break;
		//case 2:
		//{

		//}
		//	break;
		//case 3:
		//{
		//	}
		//	break;
		//}
		
		text3D->SetText(FText::FromString(FString::FromInt((int32)(5 - GrowTime))));
	}
	else {
		AFarmerCharacter* myCharacter = Cast<AFarmerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (myCharacter) {
			switch (myCharacter->Seeds)
			{
			default:
				break;
			case 0: 
			{
				bIsPlanted = false;
			}
				break;
			case 1:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}
				UStaticMesh* tempMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_small.SM_potato_small'"));
				if (tempMesh) {
					plantMesh->SetStaticMesh(tempMesh);
					plantMesh->SetRelativeScale3D(FVector{2,2,2});
					plantMesh->SetRelativeLocation(FVector{0,0,10});
				}
				bIsPlanted = true;
			}
			break;
			case 2:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}
				UStaticMesh* tempMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_eggplant_normal.SM_eggplant_normal'"));
				if (tempMesh) {
					plantMesh->SetStaticMesh(tempMesh);
					plantMesh->SetRelativeScale3D(FVector{ 0.3,0.3,0.3 });
				}
				bIsPlanted = true;
			}
			break;
			case 3:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}
				UStaticMesh* tempMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_carrot_normal_01.SM_carrot_normal_01'"));
				if (tempMesh) {
					plantMesh->SetStaticMesh(tempMesh);
					plantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
				}
				bIsPlanted = true;
			}
			break;
			}
		}
	}
}