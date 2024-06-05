// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
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
