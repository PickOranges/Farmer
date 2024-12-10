// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemRegistry.h"



UItemRegistry::UItemRegistry()
{

}

void UItemRegistry::Initialize()
{

}

UUItemData* UItemRegistry::GetItemDataByID(FName ItemID) const
{
	return nullptr;
}

void UItemRegistry::RegisterItems()
{
	if (Items.IsEmpty()) return;
	for (auto& Item : Items) {
		
	}
}
