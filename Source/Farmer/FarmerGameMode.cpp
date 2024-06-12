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

    // Test Save Soil
    SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
}

void AFarmerGameMode::SaveGame()
{
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
    UMySaveGame* LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("MySaveSlot"), 0));
    if (!LoadGameInstance) return;

    for (const FSoilData& ActorData : LoadGameInstance->SoilAndPlants)
    {
        // Soil SCM
        ASoil* CurrentActor = GetWorld()->SpawnActor<ASoil>(ASoil::StaticClass());
        CurrentActor->SoilMesh->SetRelativeTransform(ActorData.SoilTF);
        if (ActorData.SoilMeshPath.IsEmpty()) continue;
        UStaticMesh* SoilSM = LoadObject<UStaticMesh>(nullptr, *ActorData.SoilMeshPath);
        CurrentActor->SoilMesh->SetStaticMesh(SoilSM);

        // Plant SCM
        CurrentActor->PlantMesh->SetRelativeTransform(ActorData.PlantTF);
        if (!ActorData.PlantMeshPath.IsEmpty()) {
            UStaticMesh* PlantSM = LoadObject<UStaticMesh>(nullptr, *ActorData.PlantMeshPath);
            CurrentActor->PlantMesh->SetStaticMesh(PlantSM);
        }
        CurrentActor->GrowStage = ActorData.GrowStage;
        CurrentActor->CurrentPlant = ActorData.CurrentPlant;

        CurrentActor->Text3D->SetText(ActorData.Text3DContent);
        CurrentActor->Text3D->SetRelativeTransform(ActorData.Text3DTF);

        CurrentActor->RemainTime = ActorData.RemainTime;
        if (ActorData.RemainTime > 0.0f)
        {
            //GetWorld()->GetTimerManager().SetTimer(CurrentActor->MeshChangeTimerHandle, CurrentActor, &CurrentActor::, ActorData.TimerRemainingTime, false);
        }
    }
}