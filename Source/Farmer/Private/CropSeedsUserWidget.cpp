// Fill out your copyright notice in the Description page of Project Settings.


#include "CropSeedsUserWidget.h"

void UCropSeedsUserWidget::SelectButton(int32 seed)
{
	if (Buttons.Num() > seed) {
		Buttons[seed]->SetIsEnabled(false);
		Buttons[seed]->SetVisibility(ESlateVisibility::Visible);
		//GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, FString::Printf(TEXT("%s"), *Buttons[seed]->GetName()));
		for (int32 i = 0; i < Buttons.Num(); ++i) {
			if (i == seed) continue;
			Buttons[i]->SetIsEnabled(true);
			Buttons[i]->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

int32 UCropSeedsUserWidget::GetButtonCount() const
{
	return Buttons.Num();
}

//void UCropSeedsUserWidget::ButtonClickCB()
//{
//	GEngine->AddOnScreenDebugMessage(-1,INFINITY,FColor::Orange,"The button is clicked.");
//}

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

	//for (UButton* bt : Buttons) {
	//	if (bt) {
	//		bt->OnClicked.AddDynamic(this, &UCropSeedsUserWidget::ButtonClickCB);
	//	}
	//}
	Buttons[0]->SetVisibility(ESlateVisibility::Visible);
	for (int32 i = 1; i < Buttons.Num(); ++i) {
		if (Buttons[i]) {
			Buttons[i]->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void UCropSeedsUserWidget::UpdateHealthyValue_Implementation()
{
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY, FColor::Orange, FString("UpdateHealthyValue()"));
	//GEngine->AddOnScreenDebugMessage(-1, INFINITY, FColor::Orange, FString::FromInt(HealthyValue));  // This is the way you print a int value.
}
