// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "SeedItem.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API USeedItem : public UItem
{
	GENERATED_BODY()
	
protected:
	virtual void Use(class AFarmerCharacter* Character) override;
};
