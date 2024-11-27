#include "CropItemTest.h"
#include "Kismet/GameplayStatics.h"



ACropItemTest::ACropItemTest()
{
	ItemName = FText::FromString("Item");
	UseActionText = FText::FromString("Use");
}

void ACropItemTest::BeginDestroy()
{
	Thumbnail = nullptr;
	PickupMesh = nullptr;
	World = nullptr;
	OwningInventory = nullptr;

	Super::BeginDestroy();
}

void ACropItemTest::Use(AFarmerCharacter* Character)
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, "[ACropItemTest] Use(AFarmerCharacter*)");
}

void ACropItemTest::GrowCrop(FVector Scale, FVector Location)
{
	if (MeshList.IsEmpty()) return;

	PlantMesh->SetStaticMesh(MeshList[0]);
	PlantMesh->SetRelativeScale3D(FVector{ 0.7,0.7,0.7 });
	PlantMesh->SetRelativeLocation(FVector{ 0,0,12 });

	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUFunction(this, FName("ChangeMesh"), Scale, Location);
	GetWorld()->GetTimerManager().SetTimer(MeshChangeTimerHandle, TimerDelegate, 6.0f, true);
}

void ACropItemTest::ChangeMesh(FVector Scale, FVector Location)
{
	if (MeshList.IsEmpty() || !PlantMesh) return;

	if (GrowStage == MeshList.Num() - 1) {
		GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle);
	}
	
	GrowStage = (GrowStage + 1) % MeshList.Num();
	PlantMesh->SetStaticMesh(MeshList[GrowStage]);
}

void ACropItemTest::OnRemovePlant()
{
	bIsPlanted = false;
	PlantMesh->SetStaticMesh(nullptr);

	GetWorld()->GetTimerManager().ClearTimer(MeshChangeTimerHandle);
}

void ACropItemTest::PlantSeed_Implementation()
{
	if (bIsPlanted) return;

	AFarmerCharacter* Character = Cast<AFarmerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (!Character) return;

	GrowCrop();
	bIsPlanted = true;
	GrowStage = 0;
}
