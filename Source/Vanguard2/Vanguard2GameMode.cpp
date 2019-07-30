// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Vanguard2GameMode.h"
#include "Vanguard2Character.h"
#include "UObject/ConstructorHelpers.h"

AVanguard2GameMode::AVanguard2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
