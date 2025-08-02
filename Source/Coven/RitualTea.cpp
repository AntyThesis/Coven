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
		UsingCharacter->PlayerCoven->EarnExp(100.f);
		
	}


}