// Fill out your copyright notice in the Description page of Project Settings.


#include "UItemData.h"

UUItemData::UUItemData()
{
	ItemName = FName("Item");
	UseActionText = FText::FromString("Use");
}

void UUItemData::BeginDestroy()
{
	Thumbnail = nullptr;
	PickupMesh = nullptr;

	Super::BeginDestroy();
}
