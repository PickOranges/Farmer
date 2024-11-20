// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "CropBase.h"
#include "Text3DComponent.h"
#include "FarmerCharacter.h"
#include "Soil.generated.h"

UENUM(BlueprintType)
enum class EPlants : uint8 {
	Potato UMETA(DisplayName = "Potato"),
	Eggplant UMETA(DisplayName = "Eggplant"),
	Carrot UMETA(DisplayName = "Carrot"),
};



UCLASS(Blueprintable)
class FARMER_API ASoil : public ACropBase
{
	GENERATED_BODY()
	
public:	
	ASoil();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* SoilMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UStaticMeshComponent* PlantMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UText3DComponent* Text3D;	

public:
	void PlantSeed_Implementation();
	

public:
	TArray<UStaticMesh*> PotatoMeshes, EggplantMeshes, CarrotMeshes, EarnedMeshes;
	TMap<EPlants, TArray<UStaticMesh*>> MeshMap;
	FTimerHandle MeshChangeTimerHandle;
	float RemainTime{};
	int32 GrowStage{};
	UPROPERTY(BlueprintReadOnly, Category = "ASoil")
	int32 CurrentPlant{ -1 };

	UPROPERTY(BlueprintReadWrite, Category = "ASoil")
	bool bIsPlanted;
	bool bIsFruit;

public:

	UFUNCTION(BlueprintCallable)
	void GrowCrop(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location);

	UFUNCTION(BlueprintCallable)
	void ChangeMesh(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location);


	UFUNCTION()
	void OnRemovePlant();
};
