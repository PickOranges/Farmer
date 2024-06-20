// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionEWidget.h"

bool UInteractionEWidget::Initialize()
{
	if(!Super::Initialize()) return false;
	return true;
}

void UInteractionEWidget::OnOverlapBegin()
{
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, "[UInteractionEWidget] BeginOverlap");
}

void UInteractionEWidget::OnOverlapEnd()
{
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Blue, "[UInteractionEWidget] EndOverlap");
}

