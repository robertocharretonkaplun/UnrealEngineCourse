// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "SimpleActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API ASimpleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASimpleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UFUNCTION(BlueprintCallable, Category = "Actor Configuration")
    void ChangeMaterial(UMaterialInterface* NewMaterial);

	UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, 
                        class AActor* OtherActor, 
                        class UPrimitiveComponent* OtherComp, 
                        int32 OtherBodyIndex, 
                        bool bFromSweep, 
                        const FHitResult& SweepResult);

public:
  UPROPERTY(VisibleAnywhere, Category = "Actor Configuration")
    UStaticMeshComponent* MeshComponent;

  UPROPERTY(EditAnywhere, Category = "Actor Configuration")
    UMaterialInterface* DefaultMaterial;

  UPROPERTY(VisibleAnywhere)
    class UBoxComponent* CollisionComponent;
};
