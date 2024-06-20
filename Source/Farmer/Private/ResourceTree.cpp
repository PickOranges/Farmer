// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceTree.h"


AResourceTree::AResourceTree()
{
	Force.X = 500.f;
	Force.Y = 500.f;
	ResourceMesh->SetSimulatePhysics(false);

	static ConstructorHelpers::FClassFinder<AActor> WoodClassFinder(TEXT("/Script/Engine.Blueprint'/Game/BP_ResourceTreeWood.BP_ResourceTreeWood_C'"));
	if (WoodClassFinder.Succeeded())
	{
		WoodClass = WoodClassFinder.Class;
		
	}
}

void AResourceTree::OnInteract()
{
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,Super::violet,"[ResourceTree] Tree is chopped down.");
	if (bIsInteractable) {
		Super::OnInteract();
		ResourceMesh->SetSimulatePhysics(true);
	}
	else{
		if (WoodClass)
		{
			ResourceMesh->SetVisibility(false);

			FActorSpawnParameters SpawnParams;
			GetWorld()->SpawnActor<AActor>(WoodClass, GetActorLocation(), FRotator::ZeroRotator, SpawnParams);
			DisappearAndRelease();
		}
	}
}

