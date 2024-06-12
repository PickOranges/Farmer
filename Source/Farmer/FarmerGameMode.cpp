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
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

//void AFarmerGameMode::SaveGame()
//{
//    UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
//    if (!SaveGameInstance) return;
//
//    // Iterate over all actors in the world
//    for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
//    {
//        AActor* Actor = *ActorItr;
//
//        // Only save actors that you are interested in
//        if (Actor && Actor->IsA(AActor::StaticClass()))
//        {
//            FActorSaveData ActorData;
//            ActorData.ActorName = Actor->GetName();
//            ActorData.ActorLocation = Actor->GetActorLocation();
//            ActorData.ActorRotation = Actor->GetActorRotation();
//
//            // Save attached meshes
//            TArray<UStaticMeshComponent*> MeshComponents;
//            Actor->GetComponents<UStaticMeshComponent>(MeshComponents);
//            for (UStaticMeshComponent* MeshComponent : MeshComponents)
//            {
//                FMeshSaveData MeshData;
//                MeshData.MeshName = MeshComponent->GetName();
//                MeshData.MeshLocation = MeshComponent->GetRelativeLocation();
//                MeshData.MeshRotation = MeshComponent->GetRelativeRotation();
//                ActorData.AttachedMeshes.Add(MeshData);
//            }
//
//            
//
//            // Save timer information (example: saving remaining time)
//            // TODO: add other timer information, i.e. index of plant mesh array.
//            ASoil* CurrentSoil = Cast<ASoil>(Actor);
//            if (!CurrentSoil) return;  // This is NOT a soil class, thus no need to save plant mesh timer.
//            // TODO: optimize soil class!!! More plants could lead to more timerhandle!!!
//            FTimerHandle TimerHandle = CurrentSoil->MeshChangeTimerHandle1;  
//            float TimerRemaining = 0.0f;
//            if (GetWorldTimerManager().IsTimerActive(TimerHandle))
//            {
//                TimerRemaining = GetWorldTimerManager().GetTimerRemaining(TimerHandle);
//            }            
//            else if(GetWorldTimerManager().IsTimerActive(CurrentSoil->MeshChangeTimerHandle2)) {
//                TimerRemaining = GetWorldTimerManager().GetTimerRemaining(CurrentSoil->MeshChangeTimerHandle2);
//            }
//            else if(GetWorldTimerManager().IsTimerActive(CurrentSoil->MeshChangeTimerHandle3)){
//                TimerRemaining = GetWorldTimerManager().GetTimerRemaining(CurrentSoil->MeshChangeTimerHandle3);
//            }
//            else {
//                return;
//            }
//
//            ActorData.TimerRemaining = TimerRemaining;
//
//
//            // Add additional data to save here
//            SaveGameInstance->SavedActors.Add(ActorData);
//        }
//    }
//
//    UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("PlayerSaveSlot"), 0);
//}

//void AFarmerGameMode::LoadGame()
//{
//    if (!UGameplayStatics::DoesSaveGameExist(TEXT("PlayerSaveSlot"), 0)) return;
//
//    UMySaveGame* LoadGameInstance = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("PlayerSaveSlot"), 0));
//    if (!LoadGameInstance) return;
//
//    for (const FActorSaveData& ActorData : LoadGameInstance->SavedActors)
//    {
//        // Find the actor by name
//        for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
//        {
//            AActor* Actor = *ActorItr;
//            if (Actor && Actor->GetName() == ActorData.ActorName)
//            {
//                Actor->SetActorLocation(ActorData.ActorLocation);
//                Actor->SetActorRotation(ActorData.ActorRotation);
//
//                // Restore attached meshes
//                TArray<UStaticMeshComponent*> MeshComponents;
//                Actor->GetComponents<UStaticMeshComponent>(MeshComponents);
//                for (UStaticMeshComponent* MeshComponent : MeshComponents)
//                {
//                    for (const FMeshSaveData& MeshData : ActorData.AttachedMeshes)
//                    {
//                        if (MeshComponent->GetName() == MeshData.MeshName)
//                        {
//                            MeshComponent->SetRelativeLocation(MeshData.MeshLocation);
//                            MeshComponent->SetRelativeRotation(MeshData.MeshRotation);
//                            break;
//                        }
//                    }
//                }
//
//                // Restore timer information
//                ASoil* CurrentSoil = Cast<ASoil>(Actor);
//                if (!CurrentSoil) return;  // This is NOT a soil class, thus no need to save plant mesh timer.
//                if (!CurrentSoil->MeshChangeTimerHandle1.IsValid() && CurrentSoil->MeshChangeTimerHandle2.IsValid() && CurrentSoil->MeshChangeTimerHandle3.IsValid()) return;
//                if (CurrentSoil->remainTime > 0.0f)
//                {
//                    //GetWorldTimerManager().SetTimer(CurrentSoil->MeshChangeTimerHandle1, this, &ASoil::OnTimerComplete, ActorData.TimerRemaining, false);
//                    GetWorldTimerManager().SetTimer(CurrentSoil->MeshChangeTimerHandle1, this, &ASoil::ChangePotatoMesh, CurrentSoil->remainTime, true);
//
//                }
//
//                // Restore additional data you saved
//
//                break;
//            }
//        }
//    }
//}
