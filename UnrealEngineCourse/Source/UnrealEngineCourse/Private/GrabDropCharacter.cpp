// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabDropCharacter.h"

// Sets default values
AGrabDropCharacter::AGrabDropCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGrabDropCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrabDropCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGrabDropCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

