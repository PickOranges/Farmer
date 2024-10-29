// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceBase.h"



AResourceBase::AResourceBase()
{
	//Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	//RootComponent = Root;

	ResourceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ResourceMesh"));

	RootComponent = ResourceMesh;
	CollisionBox->SetupAttachment(RootComponent);
}

void AResourceBase::Interact_Implementation()
{
	AInteractable::Interact();
	//GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, "[ResourceBase] OnInteraction()");
}

void AResourceBase::DisappearAndRelease()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);
}
