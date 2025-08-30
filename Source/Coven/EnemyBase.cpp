// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "NPCBase.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyBase::Lie()
{
	if (AssociatedNPCs.IsEmpty() || !CanLie) {
		return;
	}

	for (ANPCBase* NPC : AssociatedNPCs) {
		if (NPC) {
			NPC->LoseApproval(10.f); // Decrease approval by 10
		}
	}
}

