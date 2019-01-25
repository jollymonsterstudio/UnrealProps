// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Props01GameMode.h"
#include "Props01Character.h"
#include "UObject/ConstructorHelpers.h"

AProps01GameMode::AProps01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
