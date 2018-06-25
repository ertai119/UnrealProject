// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FightMadangGameMode.h"
#include "FightMadangCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFightMadangGameMode::AFightMadangGameMode()
{
	//Blueprint'/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter'
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(
		TEXT("/Game/ThirdPersonCPP/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
