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
		//ResourceMesh->SetSimulatePhysics(true);
		//ResourceMesh->AddForce(1000.0f*GetActorForwardVector());

		ResourceMesh->SetSimulatePhysics(true);
	    GetWorld()->GetTimerManager().SetTimer(TreeFallTimerHandle, this, &AResourceTree::OnTreeFallComplete, 4.0f, false);
	}
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,Super::violet,"[ResourceTree] Tree is chopped down.");
}

void AResourceTree::OnTreeFallComplete()
{	
	if (WoodClass)
	{
		FActorSpawnParameters SpawnParams;
		FVector Location = GetActorLocation();
		GetWorld()->SpawnActor<AActor>(WoodClass, FVector(Location.X-50, Location.Y-50, 0.0f), FRotator::ZeroRotator, SpawnParams);
	}		
	
	DisappearAndRelease();
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,blue,TEXT("Tree has fallen completely."));
}

void AResourceTree::EnableToolDamge()
{
	bCanDamage = true;
}

void AResourceTree::DisableToolDamge()
{
	bCanDamage = false;
}

void AResourceTree::TakeDamage()
{
	if (health > 0) --health;
	else {
		DisableToolDamge();
		//ResourceMesh->SetSimulatePhysics(true);
		OnInteract();
	}
}


