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

	InteractionWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidgetComponent"));
	InteractionWidgetComponent->SetupAttachment(RootComponent);
	InteractionWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
	InteractionWidgetComponent->SetDrawSize(FVector2D(300, 100));

	InteractionWidgetComponent->SetVisibility(false);
}


void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	if (InteractionWidgetComponent)
	{
		UserWidget = CreateWidget<UUserWidget>(GetWorld(), InteractionWidgetComponent->GetWidgetClass());
		if (UserWidget)
		{
			InteractionWidgetComponent->SetWidget(UserWidget);

			ButtonImage = LoadObject<UTexture2D>(nullptr, TEXT("/Script/Engine.Texture2D'/Game/E_Icon.E_Icon'"));
			InteractionImage->SetBrushFromTexture(ButtonImage);
			InteractionText->SetText(FText::FromString(FString{ "Press E to Interact." }));
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
	if (InteractionWidgetComponent) {
		InteractionWidgetComponent->SetVisibility(true);
	}
	GEngine->AddOnScreenDebugMessage(-1,INFINITY,lemon,"[Interactable] OnPlayerOverlapBegin()");
}

void AInteractable::OnPlayerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!InteractionWidgetComponent) {
		InteractionWidgetComponent->SetVisibility(false);
	}
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, "[Interactable] OnPlayerOverlapEnd()");
}

