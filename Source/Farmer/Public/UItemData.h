// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UItemData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType,Blueprintable,DefaultToInstanced,EditInlineNew)
class FARMER_API UUItemData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UUItemData();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FText UseActionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	class UStaticMesh* PickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	class UTexture2D* Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FText ItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (MultiLine = true))
	FText Desc;


	virtual void BeginDestroy() override;
};
