// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerCoven.generated.h"


class ACovenCharacter;
UCLASS()
class COVEN_API APlayerCoven : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerCoven();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
	ACovenCharacter* PlayerCharacter;


	// Declaration of variables related to the coven level and experience
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	int CovenLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	float ExpThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	float ExpNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coven Level Stats")
	float CurrentExp;

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
		
};
