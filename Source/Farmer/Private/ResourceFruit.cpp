// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceFruit.h"

void AResourceFruit::OnInteract()
{
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, blue, "Collect the Fruit.");
	DisappearAndRelease();
}
