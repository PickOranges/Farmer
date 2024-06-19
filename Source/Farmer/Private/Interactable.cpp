// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"


// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AInteractable::OnPlayerOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AInteractable::OnPlayerOverlapEnd);
}


void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	if (InteractionWidgetComponent)
	{
		UUserWidget* UserWidget = CreateWidget<UUserWidget>(GetWorld(), InteractionWidgetComponent->GetWidgetClass());
		if (UserWidget)
		{
			InteractionWidgetComponent->SetWidget(UserWidget);

			SetupInteractionWidget();

		}
	}
}

void AInteractable::OnInteract()
{
	GEngine->AddOnScreenDebugMessage(-1,INFINITY, pink,"[Interactable] OnInteraction()");
	bIsInteractable = false;
}

void AInteractable::OnPlayerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ShowInteractionWidget();
	GEngine->AddOnScreenDebugMessage(-1,INFINITY,lemon,"[Interactable] OnPlayerOverlapBegin()");
}

void AInteractable::OnPlayerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	HideInteractionWidget();
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, "[Interactable] OnPlayerOverlapEnd()");
}

void AInteractable::SetupInteractionWidget()
{
	InteractionWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidgetComponent"));
	InteractionWidgetComponent->SetupAttachment(RootComponent);
	InteractionWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
	InteractionWidgetComponent->SetDrawSize(FVector2D(300, 100));

	ButtonImage = LoadObject<UTexture2D>(nullptr, TEXT("/Script/Engine.Texture2D'/Game/E_Icon.E_Icon'"));
	InteractionImage->SetBrushFromTexture(ButtonImage);
	InteractionText->SetText(FText::FromString(FString{"Press E to Interact."}));

	//HideInteractionWidget();
}

void AInteractable::ShowInteractionWidget()
{
	if (InteractionWidgetComponent && ButtonImage)
	{
		InteractionWidgetComponent->SetVisibility(true);
	}
}

void AInteractable::HideInteractionWidget()
{
	if (InteractionWidgetComponent)
	{
		InteractionWidgetComponent->SetVisibility(false);
	}
}

