// Fill out your copyright notice in the Description page of Project Settings.


#include "SBT_FoxInRangeTaskNode.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"


void USBT_FoxInRangeTaskNode::OnGameplayTaskActivated(UGameplayTask& Task)
{
}

FVector USBT_FoxInRangeTaskNode::GetRandomLocationWithinRange(const FVector& Origin, float Range)
{
	FVector Goal = Origin + FVector(FMath::RandPointInCircle(WanderRange), 0.0f);
	while (/*Goal == TargetActor->GetActorLocation()*/ FVector::Distance(Goal,TargetActor->GetActorLocation())<=75.f) {
		NPC->GetCharacterMovement()->MaxWalkSpeed = 0.f;
		Goal = Origin + FVector(FMath::RandPointInCircle(WanderRange), 0.0f);
	}

	// Match the NPC speed with animation speed in state machine, to avoid sliding or relative slower play rate.
	if (FVector::Distance(NPC->GetActorLocation(), TargetActor->GetActorLocation()) <= 500) {
		NPC->GetCharacterMovement()->MaxWalkSpeed = 100.f; // walk towards player
	} // TODO: need some blending between two speeds!
	else { // run towards player
		NPC->GetCharacterMovement()->MaxWalkSpeed = 550.f;
	}

	
	return Goal;
}

EBTNodeResult::Type USBT_FoxInRangeTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* MyController = OwnerComp.GetAIOwner();
	if (MyController == nullptr) return EBTNodeResult::Failed;

	//ACharacter* NPC = MyController->GetCharacter();
	NPC = MyController->GetCharacter();
	if (NPC == nullptr) return EBTNodeResult::Failed;

	//AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
	TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
	if (TargetActor == nullptr) return EBTNodeResult::Failed;

	FVector EndLocation;
	EndLocation = GetRandomLocationWithinRange(TargetActor->GetActorLocation(), WanderRange);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (BB == nullptr) return EBTNodeResult::Failed;
	BB->SetValueAsVector("MoveToLocation", EndLocation);


	return EBTNodeResult::Succeeded;
}