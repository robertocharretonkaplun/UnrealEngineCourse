// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformActor.h"

// Sets default values
APlatformActor::APlatformActor()
{
  PrimaryActorTick.bCanEverTick = true;

  MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
  RootComponent = MeshComponent;

  MovementSpeed = 100.0f; // Default speed
  MovementAmplitude = 500.0f; // Default amplitude
  bMovingRight = true;

  // Collisions
  CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
  CollisionComponent->SetupAttachment(RootComponent);
  CollisionComponent->SetBoxExtent(FVector(1.0f, 1.0f, 1.0f));
  CollisionComponent->SetCollisionProfileName("BlockAllDynamic");
  CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APlatformActor::OnOverlapBegin);
}

// Called when the game starts or when spawned
void APlatformActor::BeginPlay()
{
  Super::BeginPlay();
  ChangeMaterial(DefaultMaterial);
}

// Called every frame
void APlatformActor::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
  FVector CurrentLocation = GetActorLocation();
  float Movement = MovementSpeed * DeltaTime;

  if (bMovingRight)
  {
    CurrentLocation.Y += Movement;
    if (CurrentLocation.Y > InitialLocation.Y + MovementAmplitude)
    {
      bMovingRight = false;
    }
  }
  else
  {
    CurrentLocation.Y -= Movement;
    if (CurrentLocation.Y < InitialLocation.Y - MovementAmplitude)
    {
      bMovingRight = true;
    }
  }

  SetActorLocation(CurrentLocation);
}

void
APlatformActor::ChangeMaterial(UMaterialInterface* NewMaterial)
{
  if (NewMaterial && MeshComponent)
  {
    MeshComponent->SetMaterial(0, NewMaterial);
  }
}

void APlatformActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
  AActor* OtherActor,
  UPrimitiveComponent* OtherComp,
  int32 OtherBodyIndex,
  bool bFromSweep,
  const FHitResult& SweepResult)
{
  if (OtherActor && (OtherActor != this) && OtherComp)
  {
    Destroy(); // Destroy this actor
  }
}
