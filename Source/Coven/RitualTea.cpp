// Fill out your copyright notice in the Description page of Project Settings.


#include "RitualTea.h"
#include "CovenCharacter.h"
#include "PlayerCoven.h"

ARitualTea::ARitualTea() {

	ItemName = "Ritual Tea"; // Set Name of the item
	

}

void ARitualTea::UseItem(ACovenCharacter* UsingCharacter) {

	Super::UseItem(UsingCharacter);

	if (UsingCharacter != nullptr && UsingCharacter->PlayerCoven != nullptr) {
		UsingCharacter->PlayerCoven->EarnExp(500.f);
		
	}
	else{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UsingCharacter or PlayerCoven is null!")); // Display an error message if the character or coven is null
		return; // If the character or coven is null, do nothing
	}

}