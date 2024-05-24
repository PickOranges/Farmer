// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "InterfaceActivate.h"
#include "InterfacePlantSeed.h"
#include "Text3DComponent.h"
#include "FarmerCharacter.h"
#include "Soil.generated.h"

UCLASS()
class FARMER_API ASoil : public AActor, public IInterfaceActivate, public IInterfacePlantSeed
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASoil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* soilMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UStaticMeshComponent* plantMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UText3DComponent* text3D;	

public:
	FTimerHandle MeshChangeTimerHandle1, MeshChangeTimerHandle2, MeshChangeTimerHandle3;

	bool bIsPlanted;
	void PlantSeed() override;
	void Activate() override;

	// TODO: put into separated classes
	void GrowPotato();
	void GrowEggplant();
	void GrowCarrot();

	// CB for Timer & Change plants meshes
	void ChangePotatoMesh();
	void ChangeEggplantMesh();
	void ChangeCarrotMesh();

	TArray<UStaticMesh*> potatoMeshes, eggplantMeshes, carrotMeshes;
	int32 potatoIdx{}, eggplantIdx{}, carrotIdx{};

	int32 remainTime{};

	int32 currentPlant{-1};
};
