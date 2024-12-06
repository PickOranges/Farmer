// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


// BP will bind to it to update UI
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FARMER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	bool AddItem(class UFakeItem* Item);
	bool RemoveItem(class UFakeItem* Item);


	UPROPERTY(EditDefaultsOnly, Instanced)
	TArray<class UFakeItem*> DefaultItems;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryComponent")
	TArray<class UFakeItem*> Items;	// TODO: replace with TMap & make it data-driven !


	UPROPERTY(EditDefaultsOnly, Category = "InventoryComponent")
	int32 Capacity{40};

	UPROPERTY(BlueprintAssignable, Category = "InventoryComponent")
	FOnInventoryUpdated OnInventoryUpdated;
};
