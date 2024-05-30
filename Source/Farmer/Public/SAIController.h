// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TimerManager.h"
#include "SAIController.generated.h"

/**
 * 
 */

class UBehaviorTree;

UCLASS()
class FARMER_API ASAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	void BeginPlay() override;
	

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* BehaviorTree;
};
