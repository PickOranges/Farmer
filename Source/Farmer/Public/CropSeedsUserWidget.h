// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "CropSeedsUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API UCropSeedsUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	TArray<UButton*> Buttons;

	void SelectButton(int32 idx);
	int32 GetButtonCount() const;
};
