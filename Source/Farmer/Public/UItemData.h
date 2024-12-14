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
	//class UStaticMesh* PickupMesh;  // TODO: replace with TSoftObjectPtr
	TSoftObjectPtr<UStaticMesh> PickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	//class UTexture2D* Thumbnail;   // TODO: replace with TSoftObjectPtr
	TSoftObjectPtr<UTexture2D> Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FName ItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (MultiLine = true))
	FText Desc;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	bool bIsStackable;


	virtual void BeginDestroy() override;

	inline virtual FPrimaryAssetId GetPrimaryAssetId() const override { return FPrimaryAssetId("UUItemData", GetFName()); }
};
