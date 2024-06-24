// Fill out your copyright notice in the Description page of Project Settings.


#include "TMA.h"

// Sets default values
ATMA::ATMA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATMA::BeginPlay()
{
	Super::BeginPlay();
	
	// Revisar si existe un target seleccionado
	if (TargetActor)
	{
		NewTransform = TargetActor->GetActorTransform();
	}
	else {
		TargetActor = nullptr;
	}
}

// Called every frame
void ATMA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ModifyTargetTransform();
}

void ATMA::ModifyTargetTransform()
{
	if (TargetActor)
	{
		TargetActor->SetActorTransform(NewTransform);
	}
}

