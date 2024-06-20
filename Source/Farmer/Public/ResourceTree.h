// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceBase.h"
#include "Components/StaticMeshComponent.h"
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

	void OnPlayerOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceTree")
	//UStaticMesh* WoodMesh;
	UPROPERTY(EditAnywhere, Category = "ResourceTree/Wood")
	TSubclassOf<AActor> WoodClass;

	UPROPERTY(EditAnywhere, Category = "ResourceTree/Wood")
	AActor* Wood;
};
