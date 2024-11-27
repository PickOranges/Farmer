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
	//bool AddItem(class UItem* Item);
	//bool RemoveItem(class UItem* Item);

	bool AddItem(class ACropItemTest* Item);
	bool RemoveItem(class ACropItemTest* Item);



	//UPROPERTY(EditDefaultsOnly, Instanced)
	//TArray<class UItem*> DefaultItems;
	UPROPERTY(EditDefaultsOnly, Instanced, BlueprintReadWrite)
	TArray<class ACropItemTest*> DefaultItems;


	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryComponent")
	//TArray<class UItem*> Items;	// TODO: replace with TMap & make it data-driven !

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryComponent")
	TArray<class ACropItemTest*> Items;	// TODO: replace with TMap & make it data-driven !


	UPROPERTY(EditDefaultsOnly, Category = "InventoryComponent")
	int32 Capacity{40};

	UPROPERTY(BlueprintAssignable, Category = "InventoryComponent")
	FOnInventoryUpdated OnInventoryUpdated;
};
