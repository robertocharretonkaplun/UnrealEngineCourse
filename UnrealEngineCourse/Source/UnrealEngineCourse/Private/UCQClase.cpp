// Fill out your copyright notice in the Description page of Project Settings.


#include "UCQClase.h"

// Sets default values
AUCQClase::AUCQClase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUCQClase::BeginPlay()
{
	Super::BeginPlay();
	ExampleFunction();
}

// Called every frame
void AUCQClase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUCQClase::ExampleFunction()
{
	edad = 25;
	FString MSG = FString::Printf(TEXT("Edad: %f"), edad);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, MSG);
}

