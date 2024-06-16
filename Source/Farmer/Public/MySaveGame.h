// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"


USTRUCT(BlueprintType)
struct FSoilData
{
    GENERATED_BODY()

	// Soil SCM info
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	FTransform SoilTF;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	FString SoilMeshPath;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	bool bIsPlanted;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	bool bIsFruit;


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
	FText Text3DContent;
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	FTransform Text3DTF;


	// Timer info
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	float RemainTime{};
	UPROPERTY(VisibleAnywhere, Category = "SoilData")
	float TimeDuration{ 6.0 };
};

USTRUCT(BlueprintType)
struct FPlant 
{
	GENERATED_BODY()

	UPROPERTY()
	FTransform PlantTF;

	UPROPERTY()
	FString MeshPath;
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

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = "SaveGame")
	//TArray<FPlant> Plants;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = "SaveGame")
	//FString TESTPATH;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = "SaveGame")
	TArray<FSoilData> SoilAndPlants;
};
