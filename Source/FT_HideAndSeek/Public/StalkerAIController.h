// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "StalkerAIController.generated.h"

/**
 * 
 */
UCLASS()
class FT_HIDEANDSEEK_API AStalkerAIController : public AAIController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	bool bIsStalkingPlayer = true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Character", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Body;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (AllowPrivateAccess = "true"))
	UMaterial* baseMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials", meta = (AllowPrivateAccess = "true"))
	UMaterial* hitMaterial;

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
private:
	FVector Target;
	AActor* Player; // reference to the player character, so the AI can stalk it
};
