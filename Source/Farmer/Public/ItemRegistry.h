// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UItemData.h"
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

	void Initialize();  // load DataTable in .csv/.json

	UUItemData* GetItemDataByID(FName ItemID) const;  

	UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	TMap<FName, UUItemData*> Items;


	UFUNCTION(BlueprintCallable)
	virtual void RegisterItems();  // Add data into Items TMap.
};
