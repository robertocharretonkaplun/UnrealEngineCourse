// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "ParticleActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AParticleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AParticleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particles")
		UParticleSystemComponent* ParticleSystemComponent;

	UFUNCTION(BlueprintCallable, Category = "Particles")
		void StartParticles();

	UFUNCTION(BlueprintCallable, Category = "Particles")
		void StopParticles();
};
