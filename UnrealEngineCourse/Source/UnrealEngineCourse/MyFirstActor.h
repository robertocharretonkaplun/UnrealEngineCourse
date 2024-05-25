// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirstActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AMyFirstActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyFirstActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Ejemplo de una variable de instancia pública
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Example")
	float ExampleFloat;

	// Ejemplo de una función pública
	UFUNCTION(BlueprintCallable, Category = "Example")
	void ExampleFunction();

	void DemonstrateFundamentals();
public:
	// Variables y tipos de datos
	int32 IntegerVariable;
private:
	float FloatVariable;
	bool bBooleanVariable;

	// Función para demostrar operadores y estructuras de control
	//UFUNCTION(BlueprintCallable, Category = "Example")
};
