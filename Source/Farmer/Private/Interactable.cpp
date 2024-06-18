// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"


FColor pink1{ 255,182,193 };
FColor blue1{ 173,216,230 };
FColor violet1{ 198,181,237 };
FColor lemon1{ 254,255,153 };

// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



void AInteractable::OnInteraction()
{
	GEngine->AddOnScreenDebugMessage(-1,INFINITY, pink1,"[Interactable] OnInteraction()");
	bIsInteractable = false;
}

