// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"

APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	Text3D = CreateDefaultSubobject<UText3DComponent>(TEXT("SoilText"));
	RootComponent = PlantMesh;

	Text3D->SetupAttachment(PlantMesh);


	// Load meshes into TArray
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> PotatoMesh1(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_potato_small.SM_potato_small'"));
	//if (carrotMesh1.Succeeded()) carrotMeshes.Emplace(PotatoMesh1.Object);
	
	// Reserve 3 meshes space
	GrowMeshes.AddDefaulted();
	GrowMeshes.AddDefaulted();
	GrowMeshes.AddDefaulted();
}

void APlant::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1,INFINITY, FColor::Orange, FString::Printf(TEXT("The size of GrowMeshes: %d"), GrowMeshes.Num()));
}

void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PlantGrowTimerHandle.IsValid()) {
		RemainTime = GetWorld()->GetTimerManager().GetTimerRemaining(PlantGrowTimerHandle);
		Text3D->SetText(FText::FromString(FString::FromInt((int32)RemainTime)));
	}
	else {
		Text3D->SetText(FText::FromString(FString("")));
	}
}

void APlant::GrowPlant()
{
	if (GrowMeshes.Num() > 0) {
		PlantMesh->SetStaticMesh(GrowMeshes[0]);
		PlantMesh->SetRelativeScale3D(FVector{0.7, 0.7, 0.7});
		PlantMesh->SetRelativeLocation(FVector{0,0,12});
	}
	GetWorld()->GetTimerManager().SetTimer(PlantGrowTimerHandle,this,&APlant::ChangeGrowMesh, 6.0, true);
}

void APlant::ChangeGrowMesh()
{
	if (GrowMeshes.Num() > 0 && PlantMesh) {
		GrowStage = (GrowStage + 1) % GrowMeshes.Num();
		PlantMesh->SetStaticMesh(GrowMeshes[GrowStage]);
		PlantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
		PlantMesh->SetRelativeLocation(FVector{ 0,0,12 });
	}
	if (GrowStage == GrowMeshes.Num() - 1) {
		Text3D->SetText(FText::FromString(FString("")));

		GetWorld()->GetTimerManager().ClearTimer(PlantGrowTimerHandle);
		GrowStage = 0;
	}
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "Successfully set the TimerHandle inside GrowPlant()");
}

