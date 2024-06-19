// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"



// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



void AInteractable::OnInteract()
{
	GEngine->AddOnScreenDebugMessage(-1,INFINITY, pink,"[Interactable] OnInteraction()");
	bIsInteractable = false;
}

