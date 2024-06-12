//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "Text3DComponent.h"
//#include "Components/StaticMeshComponent.h"
//#include "Plant.generated.h"
//
//UENUM(BlueprintType)
//enum class EPlantType : uint8 {
//	Potato UMETA(DisplayName = "Potato"),
//	Eggplant UMETA(DisplayName = "Eggplant"),
//	Carrot UMETA(DisplayName = "Carrot"),
//};
//
//UCLASS()
//class FARMER_API APlant : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	APlant();
//protected:
//	void BeginPlay() override;
//
//public:	
//	// Called every frame
//	void Tick(float DeltaTime) override;
//
//public:
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	UStaticMeshComponent* PlantMesh;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	class UText3DComponent* Text3D;
//
//	TArray<UStaticMesh*> PotatoMeshes, EggplantMeshes, CarrotMeshes, EarnedMeshes;
//	TMap<EPlantType, TArray<UStaticMesh*>> MeshMap;
//	FTimerHandle MeshChangeTimerHandle;
//	int32 RemainTime{};
//	int32 GrowStage{};
//	int32 CurrentPlant{ -1 };
//
//	UFUNCTION(BlueprintCallable)
//	void GrowCrop(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location);
//
//	UFUNCTION(BlueprintCallable)
//	void ChangeMesh(TArray<UStaticMesh*>& Meshes, FVector Scale, FVector Location);
//};
