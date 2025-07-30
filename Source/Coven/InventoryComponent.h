// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemAdded); // Delegate for item added event
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemRemoved); // Delegate for item removed event

class AItemBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COVEN_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(BlueprintAssignable, Category = "Inventory Delegates")
	FOnItemAdded OnItemAdded; // Event triggered when an item is added to the inventory

	UPROPERTY(BlueprintAssignable, Category = "Inventory Delegates")
	FOnItemRemoved OnItemRemoved; // Event triggered when an item is removed from the inventory

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	TArray<AItemBase*> InventoryItems; // Array to hold items in the inventory

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	int MaxInventorySize; // Maximum number of items allowed in the inventory

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(AItemBase* ItemToBeAdded); // Function to add an item to the inventory

	UFUNCTION(BlueprintCallable)
	void RemoveItemFromInventory(AItemBase* ItemToBeRemoved); // Function to remove an item from the inventory

		
};
