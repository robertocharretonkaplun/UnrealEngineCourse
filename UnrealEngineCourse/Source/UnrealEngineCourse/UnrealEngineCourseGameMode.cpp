// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealEngineCourseGameMode.h"
#include "UnrealEngineCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealEngineCourseGameMode::AUnrealEngineCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
