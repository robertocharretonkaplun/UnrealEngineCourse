// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temperatura.generated.h"

UCLASS()
class UNREALENGINECOURSE_API ATemperatura : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemperatura();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Temperature variable
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Temperature")
		float TemperatureCelsius;

	// Function to calculate temperature
	UFUNCTION(BlueprintCallable, Category = "Temperature")
		float GetTemperatureFahrenheit() const;
};
