// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TMA.generated.h"

UCLASS()
class UNREALENGINECOURSE_API ATMA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATMA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "TMA Settings")
		void ModifyTargetTransform();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TMA Settings")
		AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TMA Settings")
		FTransform NewTransform;


};
