// Copyright Epic Games, Inc. All Rights Reserved.

#include "RankingListGameMode.h"
#include "RankingListCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARankingListGameMode::ARankingListGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
