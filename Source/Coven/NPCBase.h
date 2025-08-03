// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NPCBase.generated.h"

class APlayerCoven; // Forward declaration of APlayerCoven class
class ACovenCharacter; // Forward declaration of ACovenCharacter class

UCLASS()
class COVEN_API ANPCBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANPCBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	APlayerCoven* PlayerCoven; // Pointer to the player coven instance

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	bool bIsWitch = false; // Flag to indicate if the NPC is a witch

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "NPC Actions")
	virtual void JoinCoven(); // Function to join the coven

	UFUNCTION(BlueprintCallable, Category = "NPC Actions")
	virtual void LeaveCoven(); // Function to leave the coven

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Actions")
	void Interact(ACovenCharacter* InteractingCharacter); // Function to handle interaction with the NPC

};
