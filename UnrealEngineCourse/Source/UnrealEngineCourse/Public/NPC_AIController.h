// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPC_AIController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALENGINECOURSE_API ANPC_AIController : public AAIController
{
	GENERATED_BODY()
public:
	explicit ANPC_AIController(FObjectInitializer const & ObjectInitializer);

protected:
	virtual void OnPossess(APawn* InPawn) override;
};
