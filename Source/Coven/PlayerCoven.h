// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerCoven.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWitchAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWitchRemoved);

class ACovenCharacter;
class ANPCBase; // Forward declaration of NPC class

UCLASS()
class COVEN_API APlayerCoven : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerCoven();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
	ACovenCharacter* PlayerCharacter;

	UPROPERTY(BlueprintAssignable, Category = "Coven Events")
	FOnWitchAdded OnWitchAdded; // Delegate for when a witch is added to the coven

	UPROPERTY(BlueprintAssignable, Category = "Coven Events")
	FOnWitchRemoved OnWitchRemoved; // Delegate for when a witch is removed from the coven



	// Declaration of variables related to the coven level and experience
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	int CovenLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	float ExpThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	float ExpNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	float CurrentExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Witch Stats")
	int NumberOfWitches;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Witch Stats")
	TArray<ANPCBase*> CovenWitches; // Array to hold the witches in the coven

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Coven Level functions")
	virtual void IncreaseLevel();

	UFUNCTION(BlueprintCallable, Category = "Coven Level functions")
	virtual void EarnExp(float ExpToAdd);

	UFUNCTION(BlueprintCallable, Category = "Coven functions")
	virtual void AddWitch(ANPCBase* WitchToAdd);

	UFUNCTION(BlueprintCallable, Category = "Coven functions")
	virtual void RemoveWitch(ANPCBase* WitchToRemove);
		
};
