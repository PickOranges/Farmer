// Fill out your copyright notice in the Description page of Project Settings.


#include "CropBase.h"

// Add default functionality here for any IInterfacePlantSeed functions that are not pure virtual.

void ACropBase::PlantSeed_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, "CropBase::PlantSeed_Implementation()");
}
