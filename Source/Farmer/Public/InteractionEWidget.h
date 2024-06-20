// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "InteractionEWidget.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API UInteractionEWidget : public UUserWidget
{
	GENERATED_BODY()
	bool Initialize() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable", meta = (BindWidget))
	UImage* InteractionImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable", meta = (BindWidget))
	UTextBlock* InteractionText;

	UFUNCTION(Category = "Interactable")
	void OnOverlapBegin();

	UFUNCTION(Category = "Interactable")
	void OnOverlapEnd();
};
