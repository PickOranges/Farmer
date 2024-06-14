// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FarmerGameMode.generated.h"

class UMySaveGame;

UCLASS(minimalapi)
class AFarmerGameMode : public AGameModeBase
{
	GENERATED_BODY()

	//void BeginPlay() override;
	//void EndPlay(EEndPlayReason::Type Reason) override;

public:
	AFarmerGameMode();

	//void SaveGame();
	//void LoadGame();

	//UMySaveGame* SaveGameInstance;
};
