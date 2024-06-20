// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceBase.h"
#include "ResourceWood.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API AResourceWood : public AResourceBase
{
	GENERATED_BODY()

public:
	void OnInteract() override;
};

