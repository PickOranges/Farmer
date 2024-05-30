// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SBTService_CheckRange.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API USBTService_CheckRange : public UBTService
{
	GENERATED_BODY()
protected:
	void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector RangeKey;
};
