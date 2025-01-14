// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"
#include "UItemData.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "AssetRegistry/AssetRegistryModule.h"


void UMyGameInstanceSubsystem::LoadItemViaAR() // Are those assets really needed in the game? I don't see they are useful in current game???
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();


	FName PathName("/Game/BP_Resources/ItemData");
	TArray<FAssetData> FoundAssets;
	if(!AssetRegistry.GetAssetsByPath(PathName, FoundAssets))
		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Red,"[MyGameInstanceSubsystem] No Assets found!");

	// Scan unloaded assets
	for (const FAssetData& Asset : FoundAssets)
	{
		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Blue, Asset.AssetName.ToString());
	}

	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, "[MyGameInstanceSubsystem] Finished scanning and waiting for loading in the future...");
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, FString::Printf(TEXT("The scanned #assets is: %d"), FoundAssets.Num()));


	// Load assets
	for (const FAssetData& Asset : FoundAssets)
	{
		UObject* LoadedObject = Asset.GetAsset();  // TODO: make it really a async-loading!!!(i.e. load from somewhere else.)
		if (LoadedObject)
		{
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Yellow, LoadedObject->GetName());
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Yellow, "[MyGameInstanceSubsystem] Finished loading successfully!");

}
