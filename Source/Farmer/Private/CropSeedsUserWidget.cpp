// Fill out your copyright notice in the Description page of Project Settings.


#include "CropSeedsUserWidget.h"

void UCropSeedsUserWidget::SelectButton(int32 seed)
{
	if (Buttons.Num() > seed) {
		Buttons[seed]->SetIsEnabled(false);
		Buttons[seed]->SetVisibility(ESlateVisibility::Visible);
		for (UButton* bt : Buttons) {
			bt->SetIsEnabled(true);
			bt->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

int32 UCropSeedsUserWidget::GetButtonCount() const
{
	return Buttons.Num();
}

void UCropSeedsUserWidget::ButtonClickCB()
{
	GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"The button is clicked.");
}

bool UCropSeedsUserWidget::Initialize()
{
	if (!Super::Initialize()) {
		return false;
	}
	if (Buttons.Num() <= 0) {
		return false;
	}
	return true;
}

void UCropSeedsUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	for (UButton* bt : Buttons) {
		if (bt) {
			bt->OnClicked.AddDynamic(this, &UCropSeedsUserWidget::ButtonClickCB);
		}
	}
}
