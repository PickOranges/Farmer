// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"


void UMyGameInstanceSubsystem::LoadItemAsync(const FPrimaryAssetId& AssetId, TFunction<void(UUItemData*)> OnLoaded)
{
	StreamableManager.RequestAsyncLoad(AssetId,
		FStreamableDelegate::CreateLambda([=]() {
			UUItemData* ItemData = Cast<UUItemData>(UAssetManager::Get().GetPrimaryAssetObject(AssetId));
			if (OnLoaded) {
				OnLoaded(ItemData);
			}
		})
	);
}
