// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FakeItem.generated.h"

/**
 * 
 */
UCLASS(Abstract,Blueprintable,BlueprintType,EditInlineNew,DefaultToInstanced)
class FARMER_API UFakeItem : public UObject
{
	GENERATED_BODY()

public:
	UFakeItem();
	


	//UPROPERTY(Transient)
	//class UWorld* World;

	//virtual class UWorld* GetWorld() const { return World; }

	//UPROPERTY()
	//class UInventoryComponent* OwningInventory;

	//virtual void BeginDestroy() override;
};
