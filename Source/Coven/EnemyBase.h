// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyBase.generated.h"

class ANPCBase;

UCLASS()
class COVEN_API AEnemyBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyBase();

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Enemy Properties")
	TArray<ANPCBase*> AssociatedNPCs; // Array to hold associated NPCs
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Properties")
	bool CanLie = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Enemy Actions")
	virtual void Lie();

};
