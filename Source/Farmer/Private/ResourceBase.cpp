// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceBase.h"



AResourceBase::AResourceBase()
{
	//Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	//RootComponent = Root;

	ResourceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ResourceMesh"));
	RootComponent = ResourceMesh;
}

void AResourceBase::OnInteract()
{
	AInteractable::OnInteract();
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, "[ResourceBase] OnInteraction()");
}

void AResourceBase::DisappearAndRelease()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);
}
