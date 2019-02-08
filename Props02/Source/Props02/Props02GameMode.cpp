// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Props02GameMode.h"
#include "Props02Character.h"
#include "UObject/ConstructorHelpers.h"

AProps02GameMode::AProps02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
