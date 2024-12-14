// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"
#include "UItemData.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"


//void UMyGameInstanceSubsystem::LoadItemAsync(const FPrimaryAssetId& AssetId, TFunction<void(UUItemData*)> OnLoaded)
void UMyGameInstanceSubsystem::LoadItemAsync()
{
	FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
	FSoftObjectPath ObjectPath(FString("/Game/BP_Resources/ItemData"));

	FAssetData Asset;
	AssetRegistry.TryGetAssetByObjectPath(ObjectPath, Asset);

	// async loading
	Streamable.RequestAsyncLoad(ObjectPath,
		FStreamableDelegate::CreateLambda([&]() 
			{
				if (ObjectPath.IsValid()) {
					//Asset = ObjectPath.ResolveObject();
					//AssetList.Add(Asset);
					// TODO: communication/interaction with UI & FarmerCharacter !
				}
			})
	);

	//if (AssetList.IsEmpty()) return;


	// TODO2: Reconstruct UUItemData object & use it from InventorySystem !
	Asset = ObjectPath.TryLoad();  // this is very slow !!! TODO: remove it once make it work, then use async loading!!!
	if (!Asset.IsValid()) return;

	Asset.GetClass()->AddToRoot(); // Avoid GC
	GEngine->AddOnScreenDebugMessage(-1,INFINITY, FColor::Orange, Asset.GetPrimaryAssetId().ToString());
}
