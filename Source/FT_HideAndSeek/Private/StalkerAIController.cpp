// Fill out your copyright notice in the Description page of Project Settings.


#include "StalkerAIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

void AStalkerAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// do stuff with the AI
	if (GetPawn() == nullptr)
	{
		return;
	}
	if (!bIsStalkingPlayer)
	{
		// if the AI has about 100 cm the AI can move to a new location, via a Jet2 Holiday
		if (FVector::Dist(GetPawn()->GetActorLocation(), Target) < 200.0f) // i have put 200 as apaerntly my walls are to thick
		{
			// probably have a func for this
			Target = FVector(FMath::RandRange(100, 2800), FMath::RandRange(100, 3200), FMath::RandRange(50, 250));
			MoveToLocation(Target);
		}
	}
	else
	{
		if(Player)
		{
			MoveToActor(Player);
		}
	}
	
}

void AStalkerAIController::BeginPlay()
{
	Super::BeginPlay();
	// set up the AI, like finding the player and setting it as a target
	// or set up a patrol route for the AI to follow

	// lets set a random target for the AI to move towards, just for testing purposes
	if(bIsStalkingPlayer)
	{
		Player = GetWorld()->GetFirstPlayerController()->GetPawn();
		if(Player)
		{
			UE_LOG(LogTemp, Warning, TEXT("AI has started and is stalking the player"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("AI has started but could not find the player"));
		}
	}
	else
	{
		Target = FVector(FMath::RandRange(100, 2800), FMath::RandRange(100, 3200), FMath::RandRange(50, 250));
		MoveToLocation(Target);
		UE_LOG(LogTemp, Warning, TEXT("AI has started and is moving to a random location"));
	}
}