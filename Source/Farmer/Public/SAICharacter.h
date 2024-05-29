// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SAICharacter.generated.h"

UCLASS()
class FARMER_API ASAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASAICharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SetFaceDirection();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Anim")
	class UNPCFoxAnimInstance* AnimInst;

	UFUNCTION(BlueprintCallable, Category = "Anim")
	void SelectRandomState();

	UFUNCTION(BlueprintCallable, Category = "Anim")
	void OnAnimationFinished();
};
