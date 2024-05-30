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
					BB->SetValueAsBool(RangeKey.SelectedKeyName, bWithinRange);
				}
			}
		}
	}
}
