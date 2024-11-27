// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ResourceNew.h"
#include "CropBase.generated.h"

//// This class does not need to be modified.
//UINTERFACE(MinimalAPI)
//class UInterfacePlantSeed : public UInterface
//{
//	GENERATED_BODY()
//};

/**
 * 
 */

UCLASS(Blueprintable)
class FARMER_API ACropBase : public AResourceNew
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlantSeed();
	virtual void PlantSeed_Implementation();
};
