// Copyright Epic Games, Inc. All Rights Reserved.

#include "hmmmGameMode.h"
#include "hmmmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AhmmmGameMode::AhmmmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
