// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"


USTRUCT(BlueprintType)
struct FMeshSaveData
{
    GENERATED_BODY()

    UPROPERTY()
    FString MeshName;

    UPROPERTY()
    FVector MeshLocation;

    UPROPERTY()
    FRotator MeshRotation;

    // TODO: Add other mesh-related data 
};


USTRUCT(BlueprintType)
struct FActorSaveData
{
    GENERATED_BODY()

    UPROPERTY()
    FString ActorName;

    UPROPERTY()
    FVector ActorLocation;

    UPROPERTY()
    FRotator ActorRotation;

    UPROPERTY()
    TArray<FMeshSaveData> AttachedMeshes;

    UPROPERTY()
    float TimerRemaining;

    // TODO: Add other variables 
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

    UPROPERTY()
    TArray<FActorSaveData> SavedActors;
};
