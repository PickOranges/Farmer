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

	text3D->SetText(FText::FromString("#Seeds"));
	text3D->SetRelativeLocation(FVector(40.0f, 0.0f, 40.f));
	text3D->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	text3D->SetRelativeScale3D(FVector{0.3,0.3,0.3});
}

// Called when the game starts or when spawned
void ASoil::BeginPlay()
{
	Super::BeginPlay();
}

void ASoil::PlantSeed()
{
	if (bIsPlanted) {

	}
	else {
		AFarmerCharacter* myCharacter = Cast<AFarmerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
		if (myCharacter) {
			//GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"Got character.");
			switch (myCharacter->Seeds)
			{
			default:
				break;
			case 0:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}
				UStaticMesh* tempMesh=LoadObject<UStaticMesh>(nullptr,TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_normal_02.SM_potato_normal_02'"));
				if (tempMesh) {
					plantMesh->SetStaticMesh(tempMesh);
				}
			}
			break;
			case 1:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}

			}
			break;
			case 2:
			{
				if (plantMesh) {
					plantMesh->ReleaseResources();
				}

			}
			break;
			}
		}
		else {

		}
	}
}

void ASoil::Activate()
{
}

// Called every frame
void ASoil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	PlantSeed();
}

