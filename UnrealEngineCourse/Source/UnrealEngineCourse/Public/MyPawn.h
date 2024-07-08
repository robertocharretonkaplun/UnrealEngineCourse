// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "MyPawn.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

  UFUNCTION(BlueprintCallable)
  void MoveForward(float Value);
  
  UFUNCTION(BlueprintCallable)
  void MoveRight(float Value);

private:
  UPROPERTY(EditAnywhere, Category = "Input")
    UInputMappingContext* DefaultMappingContext;

  UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* MoveForwardAction;

  UPROPERTY(EditAnywhere, Category = "Input")
    UInputAction* MoveRightAction;

  UPROPERTY(VisibleAnywhere)
    class UFloatingPawnMovement* MovementComponent;

};
