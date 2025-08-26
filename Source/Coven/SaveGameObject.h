// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "InventoryItemData.h"
#include "SaveGameObject.generated.h"

/**
 * 
 */
UCLASS()
class COVEN_API USaveGameObject : public USaveGame
{
	GENERATED_BODY()


public:


	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	TArray<FInventoryItemData> InventoryItems; // Array to hold inventory items

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	TArray<int> InventoryItemIDs; // Array to hold inventory item IDs for saving

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	FVector PlayerLocation; // Player's location in the game world

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	FRotator PlayerRotation; // Player's rotation in the game world

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	int CovenLevel; // Level of the player's Coven

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	float ExpThreshold; // Total Experience points needed to reach the next level

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	float CurrentExp; // Current experience points of the player

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	float ExpNeeded; // Experience points needed to reach the next level

	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	int NumberOfWitches; // Number of witches in the player's Coven


public:

	
	
};
