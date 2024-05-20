// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfaceActivate.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfaceActivate : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FARMER_API IInterfaceActivate
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Activate()=0;
};
