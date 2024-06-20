// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceStone.h"

void AResourceStone::OnInteract()
{
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,pink,"Picked up the Stone.");
	DisappearAndRelease();
}

