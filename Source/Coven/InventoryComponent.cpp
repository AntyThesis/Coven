// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MaxInventorySize = 5; // Initialize maximum inventory size
	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Function to add item to the inventory
void UInventoryComponent::AddItemToInventory(AItemBase* ItemToBeAdded) {
	if (InventoryItems.Num() < MaxInventorySize && ItemToBeAdded != nullptr) {

		InventoryItems.Add(ItemToBeAdded); // Add the item to the inventory
		OnItemAdded.Broadcast(); // Broadcast the item added event
	}
	else if (InventoryItems.Num() >= MaxInventorySize) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Inventory is full! Cannot add more items.")); // Display message if inventory is full
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Item to be added is null!")); // Display message if item is null
	}
}

// Function to remove item from the inventory
void UInventoryComponent::RemoveItemFromInventory(AItemBase* ItemToBeRemoved) {
	if (ItemToBeRemoved != nullptr) {

		InventoryItems.RemoveSingle(ItemToBeRemoved); // Remove the item from the inventory
		OnItemRemoved.Broadcast(); // Broadcast the item removed event
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Item to be removed is null!")); // Display message if item is null
	}
}

