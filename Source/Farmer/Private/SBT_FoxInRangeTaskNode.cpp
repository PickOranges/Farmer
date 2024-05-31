// Fill out your copyright notice in the Description page of Project Settings.


#include "SBT_FoxInRangeTaskNode.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


void USBT_FoxInRangeTaskNode::OnGameplayTaskActivated(UGameplayTask& Task)
{
}

FVector USBT_FoxInRangeTaskNode::GetRandomLocationWithinRange(const FVector& Origin, float Range)
{
	FVector Goal = Origin + FVector(FMath::RandPointInCircle(WanderRange), 0.0f);
	return Goal;
}

EBTNodeResult::Type USBT_FoxInRangeTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* MyController = OwnerComp.GetAIOwner();
	if (MyController == nullptr) return EBTNodeResult::Failed;

	APawn* NPC = MyController->GetPawn();
	if (NPC == nullptr) return EBTNodeResult::Failed;

	AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
	if (TargetActor == nullptr) return EBTNodeResult::Failed;

	FVector EndLocation;
	EndLocation = GetRandomLocationWithinRange(TargetActor->GetActorLocation(), WanderRange);
	//MyController->MoveToLocation(EndLocation);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (BB == nullptr) return EBTNodeResult::Failed;
	BB->SetValueAsVector("MoveToLocation", EndLocation);

	return EBTNodeResult::Succeeded;
}