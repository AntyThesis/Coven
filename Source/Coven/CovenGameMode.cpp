// Copyright Epic Games, Inc. All Rights Reserved.

#include "CovenGameMode.h"
#include "CovenCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACovenGameMode::ACovenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
