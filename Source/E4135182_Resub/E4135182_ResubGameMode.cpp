// Copyright Epic Games, Inc. All Rights Reserved.

#include "E4135182_ResubGameMode.h"
#include "E4135182_ResubCharacter.h"
#include "UObject/ConstructorHelpers.h"

AE4135182_ResubGameMode::AE4135182_ResubGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
