// Fill out your copyright notice in the Description page of Project Settings.


#include "SBTService_CheckRange.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

void USBTService_CheckRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (ensure(BB)) {
		AActor* TargetActor = Cast<AActor>(BB->GetValueAsObject("TargetActor"));
		if (TargetActor) {
			AAIController* MyController = OwnerComp.GetAIOwner();
			if (ensure(MyController)) {
				APawn* MyNPC = MyController->GetPawn();
				if (ensure(MyNPC)) {
					float Dist = FVector::Distance(TargetActor->GetActorLocation(), MyNPC->GetActorLocation());

					bool bWithinRange = Dist < 500.f;

					bool bHasLOS = false; // Check if NPC sees the player
					if (bWithinRange) {
						bHasLOS = MyController->LineOfSightTo(TargetActor);
					}

					BB->SetValueAsBool(RangeKey.SelectedKeyName, (bWithinRange && bHasLOS));
					//BB->SetValueAsBool(RangeKey.SelectedKeyName, bWithinRange);
				}
			}
		}
	}
}


/*
issues:

1. idle animation too simple.
2. idle -> wandering or sleep or other more complex animation
3. unatrual actions when the angle between fox face direction and next navigation segment direction is greater than some angle.
	To solve this, add more different animations from different angles, like F/L/R.
*/