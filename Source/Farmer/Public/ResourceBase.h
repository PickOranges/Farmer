// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Components/StaticMeshComponent.h"
#include "ResourceBase.generated.h"


/**
 * 
 */
UCLASS()
class FARMER_API AResourceBase : public AInteractable
{
	GENERATED_BODY()
public:
	AResourceBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	UStaticMeshComponent* ResourceMesh;
};
