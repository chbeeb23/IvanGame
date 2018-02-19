// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "IvanGameGameMode.h"
#include "IvanGamePlayerController.h"
#include "IvanGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIvanGameGameMode::AIvanGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AIvanGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}