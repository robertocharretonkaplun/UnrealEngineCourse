// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstNPC.h"

// Sets default values
AMyFirstNPC::AMyFirstNPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFirstNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFirstNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyFirstNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UBehaviorTree* AMyFirstNPC::GetBehaviorTree() const
{
	return Tree;
}

