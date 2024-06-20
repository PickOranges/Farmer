// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceTree.h"

AResourceTree::AResourceTree()
{
	Force.X = 500.f;
	Force.Y = 500.f;

	Super::ResourceMesh->SetSimulatePhysics(false);
}

void AResourceTree::OnInteract()
{
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,Super::violet,"[ResourceTree] Tree is chopped down.");

	Super::ResourceMesh->SetSimulatePhysics(true);
	Super::ResourceMesh->AddForce(Force);
	InteractionWidget->SetVisibility(ESlateVisibility::Hidden);
	//DisappearAndRelease();
}
