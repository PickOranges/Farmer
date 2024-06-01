// Fill out your copyright notice in the Description page of Project Settings.


#include "SAICharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "NPCFoxAnimInstance.h"
#include "Perception/PawnSensingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
ASAICharacter::ASAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp");
}

// Called when the game starts or when spawned
void ASAICharacter::BeginPlay()
{
	Super::BeginPlay();
	//AnimInst = Cast<UNPCFoxAnimInstance>(GetMesh()->GetAnimInstance());
	//if (AnimInst) {
	//	SelectRandomState();
	//}

	PawnSensingComp->OnSeePawn.AddDynamic(this, &ASAICharacter::OnPawnSeen);
	MyController = Cast<AAIController>(GetController());
}

// Called every frame
void ASAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//SetFaceDirection();
}

void ASAICharacter::SelectRandomState()
{
	EStatesRandom RandomPicked = static_cast<EStatesRandom>(UKismetMathLibrary::RandomIntegerInRange(0, 6));
	if (AnimInst) {
		AnimInst->SetCurrentState(RandomPicked);
	}
}

void ASAICharacter::OnAnimationFinished()
{
	SelectRandomState();
}

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


void ASAICharacter::OnPawnSeen(APawn* Pawn)
{
	if (MyController) {
		UBlackboardComponent* BBC = MyController->GetBlackboardComponent();
		BBC->SetValueAsObject("TargetActor", Pawn);

		DrawDebugString(GetWorld(),GetActorLocation(),"Player Spotted",nullptr,FColor::Orange,4.f,true);
	}
}

