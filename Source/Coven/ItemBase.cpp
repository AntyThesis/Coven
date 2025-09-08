// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
#include "InventoryComponent.h"
#include "CovenCharacter.h"
#include "Components/BoxComponent.h"
#include "QuestManager.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemName = "BaseItem"; // Initialize the item name to a default value

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>((TEXT("ItemMesh"))); // Create the static mesh component for the item

	ItemType = EItemType::RegularItem; // Default item type
	

}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();

	QuestManager = Cast<AQuestManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AQuestManager::StaticClass())); // Get a reference to the QuestManager in the world
	
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
		OnPickedUp.Broadcast(); // Broadcast the item picked up event
	
		UBoxComponent* CollisionBox = FindComponentByClass<UBoxComponent>(); // Find the collision box component
		if (CollisionBox) {
			CollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision); // Disable collision for the collision box
		}
		
		if (ItemType == EItemType::RegularItem || ItemType == EItemType::KeyItem){
		InteractingCharacter->FindComponentByClass<UInventoryComponent>()->AddItemToInventory(this); // Add the item to the character's inventory
		}

		if (ItemType == EItemType::QuestItem){
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Picked up a %s! This item cannot be added to the inventory."), *ItemName)); // Notify the player that the item cannot be added to the inventory
		}
	}
}

void AItemBase::UseItem(ACovenCharacter* UsingCharacter) {
	if (UsingCharacter == nullptr) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UsingCharacter is null!")); // Display an error message if the character is null
		return; // If the character is null, do nothing
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Using item: %s"), *ItemName)); // Display a message when the item is used
	UsingCharacter->InventoryComponent->RemoveItemFromInventory(this); // Remove the item from the character's inventory
}