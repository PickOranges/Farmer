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
	// TODO: clear them later
	void PlantSeed() override;  
	void Activate() override;

public:
	TArray<UStaticMesh*> potatoMeshes, eggplantMeshes, carrotMeshes, EarnedMeshes;
	FTimerHandle MeshChangeTimerHandle;
	bool bIsPlanted;

	UFUNCTION(BlueprintCallable)
	void GrowCrop(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location);

	UFUNCTION(BlueprintCallable)
	void ChangeMesh(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location);


	int32 RemainTime{};

	int32 currentPlant{-1};

	int32 GrowStage{};

};
