// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Item.h"
#include "FakeItem.h"
#include "SeedItem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, EditInlineNew, DefaultToInstanced)
class FARMER_API USeedItem : public UFakeItem
{
	GENERATED_BODY()
	
protected:
	virtual void Use(class AFarmerCharacter* Character) override;
};
