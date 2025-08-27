// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NPCBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnApprovalGain); // Delegate for approval gain event
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnApprovalLoss); // Delegate for approval loss event

class APlayerCoven; // Forward declaration of APlayerCoven class
class ACovenCharacter; // Forward declaration of ACovenCharacter class

UCLASS()
class COVEN_API ANPCBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANPCBase();
	UPROPERTY(BlueprintAssignable, Category = "NPC Events")
	FOnApprovalGain OnApprovalGain; // Event triggered when approval is gained

	UPROPERTY(BlueprintAssignable, Category = "NPC Events")
	FOnApprovalLoss OnApprovalLoss; // Event triggered when approval is lost

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	APlayerCoven* PlayerCoven; // Pointer to the player coven instance

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	float PlayerApproval; // Approval rating of the NPC towards the player

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	float MaxApproval = 100.f; // Maximum approval rating

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	bool bIsWitch = false; // Flag to indicate if the NPC is a witch

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	float ExpToGrant = 200.f; // Experience points to grant to the coven upon joining

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Properties")
	int InfluenceToGrant = 50; // Influence points to grant to the player upon joining

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

	UFUNCTION(BlueprintCallable, Category = "NPC Actions")
	virtual void GainApproval(float Amount); // Function to increase the NPC's approval rating

	UFUNCTION(BlueprintCallable, Category = "NPC Actions")
	virtual void LoseApproval(float Amount); // Function to decrease the NPC's approval rating

};
