// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBT_FoxInRangeTaskNode.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API USBT_FoxInRangeTaskNode : public UBTTaskNode
{
	GENERATED_BODY()

protected:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	void OnGameplayTaskActivated(UGameplayTask& Task) override;

private:
	float WanderRange=350.f;
	FVector GetRandomLocationWithinRange(const FVector& Origin, float Range);
};
