// Fill out your copyright notice in the Description page of Project Settings.

#include "SAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void ASAIController::BeginPlay()
{
	Super::BeginPlay();
	//RunBehaviorTree(BehaviorTree);

	//APawn* tempPlayer = UGameplayStatics::GetPlayerPawn(this,0);
	//if (tempPlayer) {
	//	GetBlackboardComponent()->SetValueAsVector("MoveToLocation",tempPlayer->GetActorLocation());
	//	GetBlackboardComponent()->SetValueAsObject("TargetActor", tempPlayer);
	//}
}
