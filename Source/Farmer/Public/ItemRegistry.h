// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemRegistry.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType,EditInlineNew,DefaultToInstanced)
class FARMER_API UItemRegistry : public UObject
{
	GENERATED_BODY()

public:

	UItemRegistry();

	UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	TMap<UDataAsset*, int32> Items;

	UFUNCTION(BlueprintCallable)
	virtual void RegisterItems();
};
