// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"


USTRUCT(BlueprintType)
struct FPlantData
{
    GENERATED_BODY()

	// Plant SCM info
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	FTransform PlantTF;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	FString PlantMeshPath;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	int32 GrowStage{};

	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	int32 CurrentPlant{ -1 };

	// Text3D info
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	FString Text3DContent;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	FTransform Text3DTF;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")

	// Timer info
	int32 RemainTime{};
	float TimeDuration{ 6.0 };
};




UCLASS()
class FARMER_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = "SaveGame")
	TArray<int32> EarnedCrops;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = "SaveGame")
	FVector PlayerLocation{};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = "SaveGame")
	FRotator PlayerRotation{};
};
