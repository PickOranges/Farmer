// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceBase.h"

FColor pink2{ 255,182,193 };
FColor blue2{ 173,216,230 };
FColor violet2{ 198,181,237 };
FColor lemon2{ 254,255,153 };

void AResourceBase::OnInteraction()
{
	GEngine->AddOnScreenDebugMessage(-1, INFINITY, lemon2, "[ResourceBase] OnInteraction()");
}
