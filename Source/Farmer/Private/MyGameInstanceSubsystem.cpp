// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"
#include "Engine/AssetManager.h"
#include "UItemData.h"

void UMyGameInstanceSubsystem::LoadAllItems()
{
	FPrimaryAssetType ItemType = FPrimaryAssetType("UUItemData");  // TODO: check UE5 Doc: DataAsset-->AssetManagement, to make a secondary asset to primary, you should do two things???

	TArray<FPrimaryAssetId> ItemIds;
	
}
