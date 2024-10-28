// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceNew.h"

AResourceNew::AResourceNew()
{
	ResourceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ResourceMesh"));

	RootComponent = ResourceMesh;
	CollisionBox->SetupAttachment(RootComponent);
}


void AResourceNew::DisappearAndRelease_Implementation()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);
}

