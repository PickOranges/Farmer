// Copyright Epic Games, Inc. All Rights Reserved.

#include "FarmerGameMode.h"
#include "FarmerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "MySaveGame.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"
#include "Soil.h"

AFarmerGameMode::AFarmerGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

/*
void AMyActor::SaveActorData()
{
    UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
    if (!SaveGameInstance) return;

    for (TActorIterator<AActor> It(GetWorld()); It; ++It)
    {
        AActor* Actor = *It;
        FActorSaveData ActorData;
        ActorData.ActorLocation = Actor->GetActorLocation();
        ActorData.ActorRotation = Actor->GetActorRotation();

        if (AMySpecificActor* SpecificActor = Cast<AMySpecificActor>(Actor))
        {
            SaveSpecificActorData(SpecificActor, ActorData);
        }
        else if (AMyOtherActor* OtherActor = Cast<AMyOtherActor>(Actor))
        {
            SaveOtherActorData(OtherActor, ActorData);
        }

        SaveGameInstance->SavedActors.Add(ActorData);
    }

    UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("MySaveSlot"), 0);
}

void AMyActor::SaveSpecificActorData(AMySpecificActor* Actor, FActorSaveData& ActorData)
{
    ActorData.MeshLocation = Actor->MyStaticMeshComponent->GetRelativeLocation();
    ActorData.MeshRotation = Actor->MyStaticMeshComponent->GetRelativeRotation();
    if (Actor->MyStaticMeshComponent->GetStaticMesh())
    {
        ActorData.StaticMeshPath = Actor->MyStaticMeshComponent->GetStaticMesh()->GetPathName();
    }
    ActorData.MyArray = Actor->MyArray;
    ActorData.MyMap = Actor->MyMap;
    ActorData.TimerValue = Actor->MyTimer;

    // Save remaining time of the timer
    if (Actor->GetWorld()->GetTimerManager().IsTimerActive(Actor->MyTimerHandle))
    {
        ActorData.TimerRemainingTime = Actor->GetWorld()->GetTimerManager().GetTimerRemaining(Actor->MyTimerHandle);
    }
    else
    {
        ActorData.TimerRemainingTime = 0.0f;
    }
}

void AMyActor::SaveOtherActorData(AMyOtherActor* Actor, FActorSaveData& ActorData)
{
    ActorData.Text3DString = Actor->MyText3DComponent->GetText().ToString();
    ActorData.Text3DLocation = Actor->MyText3DComponent->GetRelativeLocation();
    ActorData.Text3DRotation = Actor->MyText3DComponent->GetRelativeRotation();
    ActorData.Text3DColor = Actor->MyText3DComponent->GetTextMaterial()->GetVectorParameterValue(FName("BaseColor"));
}
*/

void AFarmerGameMode::SaveGame()
{
    UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
    if (!SaveGameInstance) return;

    for (TActorIterator<AActor> It(GetWorld()); It; ++It)
    {
        AActor* Actor = *It;
        FSoilData ActorData;
        ASoil* CurrentSoil = Cast<ASoil>(Actor);
        if (!CurrentSoil) continue;

        ActorData.SoilTF = CurrentSoil->GetActorTransform();
        ActorData.SoilMeshPath = CurrentSoil->SoilMesh->GetPathName();

        ActorData.PlantTF = CurrentSoil->PlantMesh->GetRelativeTransform();
        ActorData.PlantMeshPath = CurrentSoil->PlantMesh->GetPathName();
        ActorData.GrowStage = CurrentSoil->GrowStage;
        ActorData.CurrentPlant = CurrentSoil->CurrentPlant;

        ActorData.Text3DContent = CurrentSoil->Text3D->GetText();
        ActorData.Text3DTF = CurrentSoil->Text3D->GetRelativeTransform();

        ActorData.RemainTime = CurrentSoil->RemainTime;

        // Append into TArray
        SaveGameInstance->SoilAndPlants.Emplace(ActorData);
    }
}

void AFarmerGameMode::LoadGame()
{

}