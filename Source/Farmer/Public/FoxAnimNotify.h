// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FoxAnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API UFoxAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	void Notify(USkeletalMeshComponent* SKMeshComp, UAnimSequenceBase* AnimSeq) override;
};
