// Copyright Epic Games, Inc. All Rights Reserved.

#include "project_prospectorGameMode.h"
#include "project_prospectorCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aproject_prospectorGameMode::Aproject_prospectorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
