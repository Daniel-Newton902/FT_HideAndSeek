// Copyright Epic Games, Inc. All Rights Reserved.

#include "FT_HideAndSeekGameMode.h"
#include "FT_HideAndSeekPlayerController.h"
#include "FT_HideAndSeekCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFT_HideAndSeekGameMode::AFT_HideAndSeekGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFT_HideAndSeekPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}