// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UCQClase.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AUCQClase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUCQClase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Example Settings")
		void ExampleFunction();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Example Settings")
		float edad;


};
