// Fill out your copyright notice in the Description page of Project Settings.


#include "Temperatura.h"

// Sets default values
ATemperatura::ATemperatura()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize temperature
	TemperatureCelsius = 25.0f;

}

// Called when the game starts or when spawned
void ATemperatura::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATemperatura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function to calculate temperature in Fahrenheit
float ATemperatura::GetTemperatureFahrenheit() const
{
	return (TemperatureCelsius * 9.0f / 5.0f) + 32.0f;
}