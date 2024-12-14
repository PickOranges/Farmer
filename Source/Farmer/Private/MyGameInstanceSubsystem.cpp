// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"
#include "UItemData.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"


void UMyGameInstanceSubsystem::LoadItemAsync(const FPrimaryAssetId& AssetId, TFunction<void(UUItemData*)> OnLoaded)
{
	FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetList;
	
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
	FSoftObjectPath ObjectPath(FString("/Game/BP_Resources/ItemData"));

	Streamable.RequestAsyncLoad(ObjectPath,
		FStreamableDelegate::CreateLambda([&ObjectPath]() 
			{
				if (ObjectPath.IsValid()) {
					// TODO: communication/interaction with UI & FarmerCharacter !
				}
			})
	);
}
