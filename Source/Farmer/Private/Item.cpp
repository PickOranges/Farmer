// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

UItem::UItem()
{
	ItemName = FText::FromString("Item");
	UseActionText = FText::FromString("Use");
}

void UItem::BeginDestroy()
{
	Thumbnail = nullptr;
	PickupMesh = nullptr;
	World = nullptr;
	OwningInventory = nullptr;

	Super::BeginDestroy();
}
