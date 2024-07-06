// Fill out your copyright notice in the Description page of Project Settings.


#include "Temperatura2.h"

// Sets default values
ATemperatura2::ATemperatura2() {

	PrimaryActorTick.bCanEverTick = true;

	TemperatureCelsius = 25.0f;
}

// Called when the game starts or when spawned
void ATemperatura2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATemperatura2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATemperatura2::GetTemperatureFahrenheit() const
{
	return (TemperatureCelsius * 9.0f / 5.0f) * 32.0f;
}

// Function to calculate temperature in Kelvin
float ATemperatura2::GetTemperatureKelvin() const
{
	return TemperatureCelsius + 273.15f;
}

// Function to convert Fahrenheit to Celsius
float ATemperatura2::ConvertFahrenheitToCelsius(float Fahrenheit)
{
	return (Fahrenheit - 32.0f) * 5.0f / 9.0f;
}

// Function to convert Kelvin to Celsius
float ATemperatura2::ConvertKelvinToCelsius(float Kelvin)
{
	return Kelvin - 273.15f;
}

// Function to calculate average of two temperatures
float ATemperatura2::CalculateAverageTemperature(float Temp1, float Temp2)
{
	return (Temp1 + Temp2) / 2.0f;
}

// Function to calculate the difference between two temperatures
float ATemperatura2::CalculateTemperatureDifference(float Temp1, float Temp2)
{
	return FMath::Abs(Temp1 - Temp2);
}



