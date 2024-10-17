#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IItemCppInterface.generated.h"


USTRUCT(BlueprintType)
struct FNameTextPair
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite)
    FName Name;

    UPROPERTY(BlueprintReadWrite)
    FText Text;

    // Default constructor
    FNameTextPair() {}

    // Constructor to initialize both FName and FText
    FNameTextPair(FName InName, FText InText)
        : Name(InName), Text(InText) {}
};


UINTERFACE(Blueprintable)
class UItemCppInterface : public UInterface
{
	GENERATED_BODY()
};


class IItemCppInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this empty's properties
	IItemCppInterface();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FNameTextPair ViewRaycast();  // Interface, only implemented in the derived classes !

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interaction();
};
