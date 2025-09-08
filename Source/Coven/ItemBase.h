// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
	RegularItem UMETA(DisplayName = "Regular Item"),
	QuestItem UMETA(DisplayName = "Quest Item"),
	KeyItem UMETA(DisplayName = "Key Item")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPickedUp); // Delegate for item usage event

class AQuestManager; // Forward declaration of the quest manager class
class ACovenCharacter; // Forward declaration of the character class
class UTexture2D;	// Forward declaration of the texture class
class UStaticMeshComponent; // Forward declaration of the static mesh component class


UCLASS()
class COVEN_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

	AQuestManager* QuestManager;

	UPROPERTY(BlueprintAssignable, Category = "Item Delegates")
	FOnPickedUp OnPickedUp; // Event triggered when the item is picked up
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item Properties")
	EItemType ItemType; // Type of the item

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Properties")
	UTexture2D* ItemIcon; // Icon for the item

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Properties")
	FString ItemName; // Name of the item

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Properties")
	UStaticMeshComponent* ItemMesh; // Mesh for the item

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Item Properties")
	int ItemID; // Unique ID for the item
	
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual void Interact(ACovenCharacter* InteractingCharacter); // Function to handle interaction with the item

	UFUNCTION(BlueprintCallable)
	virtual void UseItem(ACovenCharacter* UsingCharacter); // Function to use the item

};
