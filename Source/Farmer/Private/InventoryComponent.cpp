// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
//#include "Item.h"
#include "MyGameInstanceSubsystem.h"
#include "FakeItem.h"





// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
  
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	for (auto& Item : DefaultItems) {
		AddItem(Item);
	}


	// TEST: Subsystem for async loading ItemData & later maybe for construction of FakeItem.
	UMyGameInstanceSubsystem* mysub = GetWorld()->GetGameInstance()->GetSubsystem<UMyGameInstanceSubsystem>();
	if (mysub) {
		mysub->LoadItemAsync();
	}
	
}

bool UInventoryComponent::AddItem(UFakeItem* Item)
{
	if (!Item) {
		GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"[InventoryComponent.cpp] The Item is Invalid!");
		return false;
	}
	if (Items.Num() >= Capacity) {
		GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "[InventoryComponent.cpp] No more space for this Item!");
		return false;
	}

	Item->OwningInventory = this;
	Item->World = GetWorld();
	Items.Add(Item->ItemName, Item);

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

