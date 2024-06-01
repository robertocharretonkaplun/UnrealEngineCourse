// Fill out your copyright notice in the Description page of Project Settings.
// PUNTEROS Y REFERENCIAS
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AMyActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
  // Puntero crudo
  AActor* MyRawPointer;

  // Puntero a UObject
  UPROPERTY()
    AActor* MyUObjectPointer;

  // Puntero inteligente compartido
  TSharedPtr<AActor> MySharedPointer;

  // Puntero inteligente débil
  TWeakPtr<AActor> MyWeakPointer;

};
