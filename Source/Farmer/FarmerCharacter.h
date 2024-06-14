// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "InterfaceActivate.h"
#include "InterfacePlantSeed.h"
#include "Blueprint/UserWidget.h"
#include "CropSeedsUserWidget.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "MySaveGame.h"
#include "FarmerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;



DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

//DECLARE_DELEGATE(MyFeedDelegate);  // Feed the Fox


UCLASS(config=Game)
class AFarmerCharacter : public ACharacter, public IInterfaceActivate, public IInterfacePlantSeed
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* IMC_Custom;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;


	// Custom Action E
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_EAction;

	// Custom Action Q
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_QAction;

	// Custom Action Wheel Axis
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_WheelUp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* IA_WheelDown;


public:
	AFarmerCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	// CB for for pressing E
	void PressE(const FInputActionValue& Value);
	
	// CB for for pressing Q
	void PressQ(const FInputActionValue& Value);

	// CB for Mouse WheelUp
	void OnWheelUp(const FInputActionValue& Value);

	// CB for Mouse WheelDown
	void OnWheelDown(const FInputActionValue& Value);
	

	void RayCast(bool& bHit, FHitResult& HitResult);
	void Activate() override;
	void PlantSeed() override;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

	void EndPlay(const EEndPlayReason::Type Reason) override;


public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Seeds;

	UPROPERTY()
	UClass* SeedsInventoryClass;

	UPROPERTY()
	UCropSeedsUserWidget* SeedsInventory;


	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<int32> SeedsAmount{1,2,5};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> CropsEarned{0,0,0};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* BoundingBox;

	UFUNCTION()
	void OnBeginOverlapCB(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:
	// Auto Game Save Test
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USaveGame* SaveGameInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UMySaveGame* MySaveGameInstance;

protected:
	void CreateSaveGameInstance();
	void LoadGameIfExist();
	void AutoSave(int32& index);


	// test
	void SaveGame();
	void LoadGame();

	TArray<FPlant> tmp;
};

