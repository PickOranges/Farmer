// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Plant.generated.h"


UCLASS()
class FARMER_API APlant : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlant();
protected:
	void BeginPlay() override;

public:	
	// Called every frame
	void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* PlantMesh;

	TArray<UStaticMesh*> GrowMeshes;  // meshes for differrent stages
	int32 GrowStage{};
	FTimerHandle PlantGrowTimerHandle;
	int32 RemainTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UText3DComponent* Text3D;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString tag;

	void GrowPlant();
	void ChangeGrowMesh();
};
