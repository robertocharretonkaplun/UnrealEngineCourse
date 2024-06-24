// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TransformModifierActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API ATransformModifierActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATransformModifierActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the actor is constructed or properties are changed in the editor
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variable to hold the target actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
		AActor* TargetActor;

	// Variable to hold the new transform
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
		FTransform NewTransform;

	// Function to modify the transform of the target actor
	UFUNCTION(BlueprintCallable, Category = "Transform")
		void ModifyTargetTransform();

	// Array of positions for the square path
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
		TArray<FVector> Positions;

	// Array of materials to switch between
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
		TArray<UMaterialInterface*> Materials;

	// Current index in the positions array
	int32 CurrentPositionIndex;

	// Function to move to the next position
	void MoveToNextPosition();

	// Function to change the material
	void ChangeMaterial();

private:
	void DrawDebugSpheres() const;
};
