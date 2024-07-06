// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temperatura2.generated.h"

UCLASS()
class UNREALENGINECOURSE_API ATemperatura2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemperatura2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Temperatura Variable
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Temperatura")
		float TemperatureCelsius;

	// Function to calculate the temperature
	UFUNCTION(BlueprintCallable, Category = "Temperatura")
		float GetTemperatureFahrenheit() const;

	// Function to calculate temperature in Kelvin
	UFUNCTION(BlueprintCallable, Category = "Temperatura")
		float GetTemperatureKelvin() const;

	// Function to convert Fahrenheit to Celsius
	UFUNCTION(BlueprintCallable, Category = "Temperatura")
		static float ConvertFahrenheitToCelsius(float Fahrenheit);

	// Function to convert Kelvin to Celsius
	UFUNCTION(BlueprintCallable, Category = "Temperatura")
		static float ConvertKelvinToCelsius(float Kelvin);

	// Function to calculate average of two temperatures
	UFUNCTION(BlueprintCallable, Category = "Temperatura")
		static float CalculateAverageTemperature(float Temp1, float Temp2);

	// Function to calculate the difference between two temperatures
	UFUNCTION(BlueprintCallable, Category = "Temperatura")
		static float CalculateTemperatureDifference(float Temp1, float Temp2);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Temperatura")
		void CheckTemperature(int data);
};
