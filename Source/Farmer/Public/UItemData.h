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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta=(AssetBundles="ItemMesh"))
	TSoftObjectPtr<class UStaticMesh> PickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item", meta=(AssetBundles="ItemTex"))
	TSoftObjectPtr<class UTexture2D> Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FName ItemName;



	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	bool bIsStackable;


	virtual void BeginDestroy() override;

	inline virtual FPrimaryAssetId GetPrimaryAssetId() const override { return FPrimaryAssetId("UUItemData", GetFName()); }
};

//class UStaticMesh* PickupMesh;  // TODO: replace with TSoftObjectPtr