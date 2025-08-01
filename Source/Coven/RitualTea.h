// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "RitualTea.generated.h"

class ACovenCharacter;
/**
 * 
 */
UCLASS()
class COVEN_API ARitualTea : public AItemBase
{
	GENERATED_BODY()

public:
	ARitualTea();

	void UseItem(ACovenCharacter* UsingCharacter) override;
	
};
