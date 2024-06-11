// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vehicle.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AVehicle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVehicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Vehicle Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	float speed;

	// Vehicle Color
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle")
	FColor Color;

	// Move Vehicle
	UFUNCTION(BlueprintCallable, Category = "Vehicle")
	virtual void Move();
};

// UE_LOG(LogTemp, Warning, TEXT("Super Vehicle is moving at speed %f"), Speed);