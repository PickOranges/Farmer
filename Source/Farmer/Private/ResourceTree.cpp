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
	if (bIsInteractable) {
		Super::OnInteract();
		Super::ResourceMesh->SetSimulatePhysics(true);
		//Super::ResourceMesh->AddForce(Force);
		InteractionWidget->SetVisibility(ESlateVisibility::Hidden);

		static ConstructorHelpers::FObjectFinder<UStaticMesh> WoodMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
		Super::ResourceMesh->SetStaticMesh(WoodMesh.Object);
	}
	else {
		DisappearAndRelease();
	}
}
