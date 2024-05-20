// Fill out your copyright notice in the Description page of Project Settings.


#include "Soil.h"

// Sets default values
ASoil::ASoil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	soilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoilMesh"));
	soilTextWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("SoilText"));
	RootComponent = soilMesh;
	soilTextWidget->SetupAttachment(soilMesh);

	static ConstructorHelpers::FClassFinder<UUserWidget> soilWidgetClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/ThirdPerson/Blueprints/UMG_SoilText.UMG_SoilText_C'"));
	soilTextWidget->SetWidgetClass(soilWidgetClass.Class);
	soilTextWidget->SetRelativeLocation(FVector{0,0,10});
	soilTextWidget->SetWidgetSpace(EWidgetSpace::Screen);
	soilTextWidget->SetDrawSize(FVector2D{400,20});

	static ConstructorHelpers::FObjectFinder<UStaticMesh> tempMesh(TEXT("/Script/Engine.StaticMesh'/Game/Growing_Plants/Meshes/SM_crate_02.SM_crate_02'"));
	soilMesh->SetStaticMesh(tempMesh.Object);
	soilMesh->SetWorldScale3D(FVector{5,5,5});
}

// Called when the game starts or when spawned
void ASoil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASoil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

