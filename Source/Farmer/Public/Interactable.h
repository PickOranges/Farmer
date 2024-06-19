// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
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
	void BeginPlay() override;

	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	bool bIsInteractable = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	UBoxComponent* CollisionBox;

	virtual void OnInteract();

	UFUNCTION(Category = "Interactable")
	void OnPlayerOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(Category = "Interactable")
	void OnPlayerOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	class UWidgetComponent* InteractionWidgetComponent; // Widget component for UI message

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> InteractionWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	class UTexture2D* ButtonImage; // Image representing the 'E' key

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable", meta = (BindWidget))
	class UImage* InteractionImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable", meta = (BindWidget))
	class UTextBlock* InteractionText;

private:
	UUserWidget* UserWidget;
};
