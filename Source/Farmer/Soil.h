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

private:
	FTimerHandle MeshChangeTimerHandle;

public:
	bool bIsPlanted;
	void PlantSeed() override;
	void Activate() override;

	// TODO: put into separated classes
	void GrowPotato();
	void GrowEggplant(float deltaTime);
	void GrowCarrot(float deltaTime);

	// CB for Timer & Change plants meshes
	void ChangePotatoMesh();

	TArray<UStaticMesh*> potatoMeshes;
	int32 potatoIdx=0;
};
