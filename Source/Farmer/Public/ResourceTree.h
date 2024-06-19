// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceBase.h"
#include "ResourceTree.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API AResourceTree : public AResourceBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceTree")
	FVector Force{};

	AResourceTree();
	void OnInteract();
};
