// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceNew.h"
#include "Components/StaticMeshComponent.h"
#include "ResourceTree.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API AResourceTree : public AResourceNew
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceTree")
	FVector Force{};

	AResourceTree();

	void Interact_Implementation();

	UPROPERTY(EditAnywhere, Category = "ResourceTree/Wood")
	TSubclassOf<AActor> WoodClass;

	UPROPERTY(EditAnywhere, Category = "ResourceTree/Wood")
	FTimerHandle TreeFallTimerHandle;

	UFUNCTION()
	void OnTreeFallComplete();




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceTree")
	bool bCanDamage{false};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ResourceTree")
	int32 health{ 6 };

	UFUNCTION()
	void EnableToolDamge();

	UFUNCTION()
	void DisableToolDamge();

	UFUNCTION(BlueprintCallable, Category = "ResourceTree")
	void TakeDamage();
};
