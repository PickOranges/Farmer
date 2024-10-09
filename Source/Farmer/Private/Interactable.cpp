// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"


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
	UClass* WidgetClass = LoadClass<UUserWidget>(nullptr,TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UMG_InteractionE.UMG_InteractionE_C'"));
	if (!WidgetClass) return;
	InteractionWidget = CreateWidget<UUserWidget>(GetWorld(),WidgetClass);
	InteractionWidget->AddToViewport();
	//InteractionWidget->SetPositionInViewport(FVector2D(300,300));
	InteractionWidget->SetVisibility(ESlateVisibility::Hidden);
}	

void AInteractable::OnInteract()
{
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY, pink,"[Interactable] OnInteraction()");
	bIsInteractable = false;
}

void AInteractable::OnPlayerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	InteractionWidget->SetVisibility(ESlateVisibility::Visible);
	//GEngine->AddOnScreenDebugMessage(-1,INFINITY,lemon,"[Interactable] OnPlayerOverlapBegin()");
}

void AInteractable::OnPlayerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	InteractionWidget->SetVisibility(ESlateVisibility::Hidden);
	InteractionWidget->RemoveFromParent();
	InteractionWidget->Destruct();
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon, "[Interactable] OnPlayerOverlkapEnd()");
}
