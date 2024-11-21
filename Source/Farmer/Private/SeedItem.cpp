// Fill out your copyright notice in the Description page of Project Settings.


#include "SeedItem.h"

void USeedItem::Use(AFarmerCharacter* Character)
{
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, "[SeedItem]: Use(Character)");
}
