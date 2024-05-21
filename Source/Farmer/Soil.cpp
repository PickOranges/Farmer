// Fill out your copyright notice in the Description page of Project Settings.


#include "Soil.h"

// Sets default values
ASoil::ASoil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	soilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoilMesh"));
	text3D = CreateDefaultSubobject<UText3DComponent>(TEXT("SoilText"));
	RootComponent = soilMesh;
	text3D->SetupAttachment(soilMesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> tempMesh(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_crate_02.SM_crate_02'"));
	soilMesh->SetStaticMesh(tempMesh.Object);
	soilMesh->SetWorldScale3D(FVector{5,5,5});

	text3D->SetText(FText::FromString("#Seeds"));
	text3D->SetRelativeLocation(FVector(0.0f, 0.0f, 40.f));
	text3D->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	text3D->SetRelativeScale3D(FVector{0.3,0.3,0.3});
}

// Called when the game starts or when spawned
void ASoil::BeginPlay()
{
	Super::BeginPlay();
	PlantSeed();
}

void ASoil::PlantSeed()
{
	if (bIsPlanted) {

	}
	else {
		AFarmerCharacter* myCharacter = Cast<AFarmerCharacter>(GetWorld()->GetFirstLocalPlayerFromController());
		if (myCharacter) {
			GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"No character got.");
		}
		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"Got the character.");
	}
}

void ASoil::Activate()
{
}

// Called every frame
void ASoil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

