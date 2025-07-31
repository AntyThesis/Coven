// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
#include "InventoryComponent.h"
#include "CovenCharacter.h"
#include "Components/BoxComponent.h"


// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>((TEXT("ItemMesh"))); // Create the static mesh component for the item
	

}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function to handle interaction with the item
void AItemBase::Interact(ACovenCharacter* InteractingCharacter) {
	if (InteractingCharacter) {
		ItemMesh->SetVisibility(false); // Hide the item mesh when interacted with
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Disable collision for the item mesh
		ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Disable collision for the item mesh

		UBoxComponent* CollisionBox = FindComponentByClass<UBoxComponent>(); // Find the collision box component
		CollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Disable collision for the collision box

		InteractingCharacter->FindComponentByClass<UInventoryComponent>()->AddItemToInventory(this); // Add the item to the character's inventory
	}
}

