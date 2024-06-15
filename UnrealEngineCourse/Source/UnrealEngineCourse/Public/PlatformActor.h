// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PlatformActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API APlatformActor : public AActor
{
  GENERATED_BODY()

public:
  // Sets default values for this actor's properties
  APlatformActor();

protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;

  UFUNCTION(BlueprintCallable, Category = "Grabbable")
    void ChangeMaterial(UMaterialInterface* NewMaterial);

  UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent,
      class AActor* OtherActor,
      class UPrimitiveComponent* OtherComp,
      int32 OtherBodyIndex,
      bool bFromSweep,
      const FHitResult& SweepResult);
private:
  UPROPERTY(VisibleAnywhere, Category = "Grabbable")
    UStaticMeshComponent* MeshComponent;

  UPROPERTY(EditAnywhere, Category = "Grabbable")
    UMaterialInterface* DefaultMaterial;

  UPROPERTY(VisibleAnywhere)
    class UBoxComponent* CollisionComponent;

  UPROPERTY(EditAnywhere, Category = "Movement")
    float MovementSpeed;

  UPROPERTY(EditAnywhere, Category = "Movement")
    float MovementAmplitude;

  FVector InitialLocation;
  bool bMovingRight;
};