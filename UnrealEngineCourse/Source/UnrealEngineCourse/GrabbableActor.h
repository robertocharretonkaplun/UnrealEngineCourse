// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrabbableActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AGrabbableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrabbableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UFUNCTION(BlueprintCallable, Category = "Grabbable")
    void Grab();

  UFUNCTION(BlueprintCallable, Category = "Grabbable")
    void Drop();

private:
  UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;

  UPROPERTY(EditAnywhere)
    bool bIsGrabbed;

  UPROPERTY(EditAnywhere)
    AActor* HoldingActor;

  FVector InitialLocation;
  FRotator InitialRotation;
};
