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
