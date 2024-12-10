// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
//#include "Item.h"
//#include "CropItemTest.h"
#include "FakeItem.h"





// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
  
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	for (auto& [ItemName, Item] : DefaultItems) {
		AddItem(Item);
	}
	
}

bool UInventoryComponent::AddItem(UFakeItem* Item)
{
	if (Items.Num()>=Capacity || !Item) {
		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"The Item is Invalid!");
		return false;
	}

	Item->OwningInventory = this;
	Item->World = GetWorld();
	//Items.Add(Item);
	Items.Add(Item->ItemName);

	OnInventoryUpdated.Broadcast();  // update UI
	return true;
}

bool UInventoryComponent::RemoveItem(UFakeItem* Item)
{
	if (!Item) return false;

	//Items.RemoveSingle(Item);
	UFakeItem* ItemRemoved;
	bool bIsSucceed = Items.RemoveAndCopyValue(Item->ItemName, ItemRemoved);
	OnInventoryUpdated.Broadcast();
	
	return bIsSucceed;
}




















//bool UInventoryComponent::AddItem(UItem* Item)
//{
//	if (Items.Num()>=Capacity || !Item) {
//		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"The Item is Invalid!");
//		return false;
//	}
//
//	Item->OwningInventory = this;
//	Item->World = GetWorld();
//	Items.Add(Item);
//
//	OnInventoryUpdated.Broadcast();  // update UI
//	return true;
//}
//
//
//
//bool UInventoryComponent::RemoveItem(UItem* Item)
//{
//	if (!Item) return false;
//
//	Items.RemoveSingle(Item);
//	OnInventoryUpdated.Broadcast();
//	
//	return true;
//}

