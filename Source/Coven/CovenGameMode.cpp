// Copyright Epic Games, Inc. All Rights Reserved.

#include "CovenGameMode.h"
#include "CovenCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "ItemBase.h"
#include "SaveGameObject.h"
#include "EngineUtils.h"
#include "UObject/ConstructorHelpers.h"

ACovenGameMode::ACovenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/Player/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


void ACovenGameMode::BeginPlay() {
	Super::BeginPlay();

        USaveGameObject* SaveGame = Cast<USaveGameObject>(UGameplayStatics::LoadGameFromSlot("PlayerSave", 0));

        if (SaveGame)
        {
            for (TActorIterator<AItemBase> It(GetWorld()); It; ++It)
            {
                AItemBase* Item = *It;
                if (SaveGame->InventoryItemIDs.Contains(Item->ItemID))
                {
                    // Already picked up -> remove from world
					Item->SetActorHiddenInGame(true);
                }
            }
        }
    }
