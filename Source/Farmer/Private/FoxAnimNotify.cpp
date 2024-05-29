// Fill out your copyright notice in the Description page of Project Settings.


#include "FoxAnimNotify.h"
#include "SAICharacter.h"

void UFoxAnimNotify::Notify(USkeletalMeshComponent* SKMeshComp, UAnimSequenceBase* AnimSeq)
{
	if (ASAICharacter* fox = Cast<ASAICharacter>(SKMeshComp->GetOwner())) {
		fox->OnAnimationFinished();
	}
}
