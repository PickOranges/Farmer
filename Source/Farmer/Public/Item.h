// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS(Abstract,Blueprintable,BlueprintType,EditInlineNew,DefaultToInstanced)
class FARMER_API UItem : public UObject
{
	GENERATED_BODY()
	
public:
	UItem();
	virtual void BeginDestroy() override;


	UPROPERTY(Transient)
	class UWorld* World;

	//virtual class UWorld* GetWorld() const { return World; }


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FText UseActionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	class UStaticMesh* PickupMesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	class UTexture2D* Thumbnail;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FText ItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta=(MultiLine=true))
	FText Desc;

	UPROPERTY()
	class UInventoryComponent* OwningInventory;

	virtual void Use(class AFarmerCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(class AFarmerCharacter* Character);
};
