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

// Function to calculate temperature in Kelvin
float ATemperatura::GetTemperatureKelvin() const
{
	return TemperatureCelsius + 273.15f;
}

// Function to convert Fahrenheit to Celsius
float ATemperatura::ConvertFahrenheitToCelsius(float Fahrenheit)
{
	return (Fahrenheit - 32.0f) * 5.0f / 9.0f;
}

// Function to convert Kelvin to Celsius
float ATemperatura::ConvertKelvinToCelsius(float Kelvin)
{
	return Kelvin - 273.15f;
}

// Function to calculate average of two temperatures
float ATemperatura::CalculateAverageTemperature(float Temp1, float Temp2)
{
	return (Temp1 + Temp2) / 2.0f;
}

// Function to calculate the difference between two temperatures
float ATemperatura::CalculateTemperatureDifference(float Temp1, float Temp2)
{
	return FMath::Abs(Temp1 - Temp2);
}

