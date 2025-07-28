// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCoven.h"
#include "Kismet/GameplayStatics.h"
#include "CovenCharacter.h"

// Sets default values
APlayerCoven::APlayerCoven()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize default values
	CovenLevel = 1;
	ExpThreshold = 1000.f;
	CurrentExp = 0.f;
	ExpNeeded = ExpThreshold - CurrentExp;
}

// Called when the game starts or when spawned
void APlayerCoven::BeginPlay()
{
	Super::BeginPlay();
	PlayerCharacter = Cast<ACovenCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (!IsValid(PlayerCharacter)){
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PlayerCharacter is NULL! Check if the player character is set correctly."));
	}
	
}

// Called every frame
void APlayerCoven::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APlayerCoven::IncreaseLevel(){
	CovenLevel++; // Increase the level of the player's Coven
	CurrentExp = 0.f; // Reset current exp after leveling up
	ExpThreshold *= 1.2f; // Increase the threshold for the next level
}


void APlayerCoven::EarnExp(float ExpAmount)
{
	if (ExpAmount <= 0.f) return; // No negative or zero exp
	CurrentExp += ExpAmount; // Add the earned exp to current exp
	ExpNeeded = ExpThreshold - CurrentExp; // Update the exp needed for the next level
	if (CurrentExp >= ExpThreshold) {
		IncreaseLevel(); // Level up if current exp exceeds threshold
	}
}