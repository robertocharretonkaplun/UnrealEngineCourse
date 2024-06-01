// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabbableActor.h"

// Sets default values
AGrabbableActor::AGrabbableActor()
{
  PrimaryActorTick.bCanEverTick = true;

  MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
  RootComponent = MeshComponent;

  bIsGrabbed = false;
  HoldingActor = nullptr;
}

// Called when the game starts or when spawned
void AGrabbableActor::BeginPlay()
{
	Super::BeginPlay();
  InitialLocation = GetActorLocation();
  InitialRotation = GetActorRotation();
}

// Called every frame
void AGrabbableActor::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  if (bIsGrabbed && HoldingActor)
  {
    FVector NewLocation = HoldingActor->GetActorLocation() + HoldingActor->GetActorForwardVector() * 200.0f;
    SetActorLocation(NewLocation);
  }
}


void AGrabbableActor::Grab()
{
  bIsGrabbed = true;
}

void AGrabbableActor::Drop()
{
  bIsGrabbed = false;
  HoldingActor = nullptr;

  SetActorLocation(InitialLocation);
  SetActorRotation(InitialRotation);
}
