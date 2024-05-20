// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SoilText.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API USoilText : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString seedAmount{"This is initial text set from class"};
};
