// Fill out your copyright notice in the Description page of Project Settings.


#include "SAICharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASAICharacter::ASAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASAICharacter::BeginPlay()
{
	Super::BeginPlay();
	SetFaceDirection();
}

// Called to bind functionality to input
//void ASAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

void ASAICharacter::SetFaceDirection()
{
	APawn* temp = UGameplayStatics::GetPlayerPawn(this, 0);
	if (temp) {
		FVector Start = this->GetActorLocation();
		FVector End = temp->GetActorLocation();
		FRotator Dir = (End - Start).Rotation();
		Dir.Yaw = FRotator::ClampAxis(Dir.Yaw);
		this->FaceRotation(Dir, .0f);
	}
}


// Called every frame
void ASAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//SetFaceDirection();

	ACharacter* player = UGameplayStatics::GetPlayerCharacter(GetWorld(),0);
	DistToPlayer = FVector::Dist(player->GetActorLocation(), GetActorLocation());
}