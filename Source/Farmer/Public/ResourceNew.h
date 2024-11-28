// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "ResourceNew.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API AResourceNew : public AInteractable
{
	GENERATED_BODY()
	
public:
	AResourceNew();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceNew")
	UStaticMeshComponent* ResourceMesh;
};
