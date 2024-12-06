// Fill out your copyright notice in the Description page of Project Settings.


#include "FakeItem.h"

UFakeItem::UFakeItem()
{

}



void UFakeItem::Use(AFarmerCharacter* Character)
{
	World = nullptr;
	OwningInventory = nullptr;
}


void UFakeItem::BeginDestroy()
{
	OwningInventory = nullptr;

	Super::BeginDestroy();
}
