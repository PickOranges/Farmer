// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"
#include "UItemData.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "AssetRegistry/AssetRegistryModule.h"


//void UMyGameInstanceSubsystem::LoadItemAsync(const FPrimaryAssetId& AssetId, TFunction<void(UUItemData*)> OnLoaded)
//void UMyGameInstanceSubsystem::LoadItemAsync()
//{
//	FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
//	
//	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
//	FSoftObjectPath ObjectPath(FString("C:/Users/cheng/source/repos/UE5/Farmer/Content/BP_Resources/ItemData/Blouse.uasset"));
//	//FSoftObjectPath ObjectPath(FString("/All/Game/BP_Resources/ItemData"));
//
//
//	FAssetData Asset;
//	AssetRegistry.TryGetAssetByObjectPath(ObjectPath, Asset);
//
//	// async loading
//	Streamable.RequestAsyncLoad(ObjectPath,
//		FStreamableDelegate::CreateLambda([&]() 
//			{
//				//if (ObjectPath.IsValid()) {
//					//Asset = ObjectPath.ResolveObject();
//					//AssetList.Add(Asset);
//					// TODO: communication/interaction with UI & FarmerCharacter !
//				//}
//				if (Asset.IsValid()) {
//					Asset.GetClass()->AddToRoot(); // Avoid GC
//					FString AssName = Asset.GetAsset()->GetPrimaryAssetId().ToString();
//					GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Green,AssName);
//				}
//				
//			})
//	);
//
//
//	//Asset = ObjectPath.TryLoad();  // this is very slow !!! TODO: remove it once make it work, then use async loading!!!
//
//}

void UMyGameInstanceSubsystem::LoadItemViaAR()
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();


	//FSoftObjectPath ObjectPath(FString("C:/Users/cheng/source/repos/UE5/Farmer/Content/BP_Resources/ItemData"));
	FName PathName("C:/Users/cheng/source/repos/UE5/Farmer/Content/BP_Resources/ItemData");
	TArray<FAssetData> FoundAssets;
	AssetRegistry.GetAssetsByPath(PathName, FoundAssets);

	// Scan unloaded assets
	for (const FAssetData& Asset : FoundAssets)
	{
		UE_LOG(LogTemp, Log, TEXT("Found Asset: %s"), *Asset.AssetName.ToString());
		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Blue, Asset.AssetName.ToString());

	}

	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, "Finished scanning...");
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, FString::Printf(TEXT("The #assets is: %d"), FoundAssets.Num()));


	// Load assets
	for (const FAssetData& Asset : FoundAssets)
	{
		UObject* LoadedObject = Asset.GetAsset(); 
		if (LoadedObject)
		{
			UE_LOG(LogTemp, Log, TEXT("Loaded Asset: %s"), *LoadedObject->GetName());
			GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, LoadedObject->GetName());
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, "Finished loading!!!");

}




void UMyGameInstanceSubsystem::LoadItemAM()
{
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();

}
