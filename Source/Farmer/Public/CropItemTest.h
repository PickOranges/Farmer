// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../CropBase.h"
#include "../FarmerCharacter.h"
#include "Components/StaticMeshComponent.h"


#include "CropItemTest.generated.h"

/**
 * 
 */
UCLASS()
class FARMER_API ACropItemTest : public ACropBase
{
	GENERATED_BODY()
	
public:

	ACropItemTest();
	virtual void BeginDestroy() override;


	UPROPERTY(Transient)
	class UWorld* World;

	//virtual class UWorld* GetWorld() const { return World; }


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACropItemTest")
	FText UseActionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACropItemTest")
	class UStaticMesh* PickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ACropItemTest")
	class UTexture2D* Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACropItemTest")
	FText ItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ACropItemTest", meta = (MultiLine = true))
	FText Desc;

	UPROPERTY()
	class UInventoryComponent* OwningInventory;

	virtual void Use(class AFarmerCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(class AFarmerCharacter* Character);

	//////////////////////////////////////////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* SoilMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* PlantMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UStaticMesh*> MeshList;

	UPROPERTY(BlueprintReadOnly, Category = "ACropItemTest")
	int32 GrowStage{ -1 };

	UPROPERTY(BlueprintReadWrite, Category = "ACropItemTest")
	bool bIsPlanted;

	FTimerHandle MeshChangeTimerHandle;





	UFUNCTION(BlueprintCallable)
	void GrowCrop(FVector Scale = FVector( 0.7f,0.7,0.7), FVector Location = FVector(0.0f,0,12));


	UFUNCTION(BlueprintCallable)
	void ChangeMesh(FVector Scale, FVector Location);


	UFUNCTION()
	void OnRemovePlant();


	virtual void PlantSeed_Implementation();
};
