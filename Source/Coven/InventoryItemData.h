#pragma once

#include "CoreMinimal.h"
#include "InventoryItemData.generated.h"


USTRUCT(BlueprintType)
struct FInventoryItemData
{
    GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Properties")
	FString IconFilePath; // Icon for the item

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Properties")
	FString ItemName; // Name of the item

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemClassPath;

};