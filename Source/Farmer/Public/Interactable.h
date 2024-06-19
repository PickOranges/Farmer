// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class FARMER_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	FColor pink{ 255,182,193 };
	FColor blue{ 173,216,230 };
	FColor violet{ 198,181,237 };
	FColor lemon{ 254,255,153 };

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	bool bIsInteractable = true;

	virtual void OnInteract();
};
