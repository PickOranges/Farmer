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
	if (bIsInteractable) {
		Super::OnInteract();
		ResourceMesh->SetSimulatePhysics(true);
		ResourceMesh->AddForce(1000.0f*GetActorForwardVector());
		GetWorld()->GetTimerManager().SetTimer(TreeFallTimerHandle, this, &AResourceTree::OnTreeFallComplete, 4.0f, false);
	}
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,Super::violet,"[ResourceTree] Tree is chopped down.");
}

void AResourceTree::OnTreeFallComplete()
{	
	if (WoodClass)
	{
		FActorSpawnParameters SpawnParams;
		GetWorld()->SpawnActor<AActor>(WoodClass, GetActorLocation()-FVector(50,50,15), FRotator::ZeroRotator, SpawnParams);
	}		
	
	DisappearAndRelease();
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,blue,TEXT("Tree has fallen completely."));
}
