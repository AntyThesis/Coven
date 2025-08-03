// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCBase.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCoven.h"

// Sets default values
ANPCBase::ANPCBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCBase::BeginPlay()
{
	Super::BeginPlay();

	PlayerCoven = Cast<APlayerCoven>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCoven::StaticClass()));


}

// Called every frame
void ANPCBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function to join coven
void ANPCBase::JoinCoven() {
	if (PlayerCoven) {
		PlayerCoven->AddWitch(this);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("NPC Added"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NPC isnt paired to the player coven!"));
	}
}

// Function to leave coven
void ANPCBase::LeaveCoven() {
	if (PlayerCoven) {
		PlayerCoven->RemoveWitch(this);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NPC isnt paired to the player coven!"));
	}

}


void ANPCBase::Interact_Implementation(ACovenCharacter* InteractingCharacter) {

}