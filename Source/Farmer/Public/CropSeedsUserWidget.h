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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	TArray<UButton*> Buttons;

	UFUNCTION()
	void SelectButton(int32 idx);

	UFUNCTION()
	int32 GetButtonCount() const;

	UFUNCTION()
	//void ButtonClickCB();

	bool Initialize() override;

	void NativeConstruct() override;

	UFUNCTION(BlueprintNativeEvent)
	void UpdateHealthyValue();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HealthyValue = 100.f;
};
