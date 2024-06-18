// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PlatformActor2.generated.h"

UCLASS()
class UNREALENGINECOURSE_API APlatformActor2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformActor2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Platform")
	void ChangeMaterial(UMaterialInterface* newMaterial);

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent,
											class AActor* OtherActor,
											class UPrimitiveComponent* OtherComp,
											int32 OtherBodyIndex,
											bool bFromSweep,
											const FHitResult& SweepResult);

private:
	UPROPERTY(VisibleAnywhere, Category = "Platform")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, Category = "Platform")
	UMaterialInterface* DefaultMaterial;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, Category = "Platform")
	float MovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Platform")
	float MovementAmplitud;

	FVector InitialLocation;
	bool isMovingRight;
};
