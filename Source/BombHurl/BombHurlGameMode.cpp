// Copyright Epic Games, Inc. All Rights Reserved.

#include "BombHurlGameMode.h"
#include "BombHurlCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABombHurlGameMode::ABombHurlGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
