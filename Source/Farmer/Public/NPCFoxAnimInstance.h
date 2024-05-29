// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NPCFoxAnimInstance.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EStatesRandom :uint8 {
	Sleep1,
	Sleep2,
	Stand1,
	Stand2,
	Idle1,
	Idle2,
};



UCLASS()
class FARMER_API UNPCFoxAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "StatesEnum")
	void SetCurrentState(EStatesRandom NewState);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StatesEnum")
	EStatesRandom CurrState;
};
