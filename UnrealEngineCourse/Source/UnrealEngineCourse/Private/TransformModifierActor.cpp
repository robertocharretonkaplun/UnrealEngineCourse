#include "TransformModifierActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "DrawDebugHelpers.h"

// Sets default values
ATransformModifierActor::ATransformModifierActor()
{
  PrimaryActorTick.bCanEverTick = true;  
}

// Called when the game starts or when spawned
void ATransformModifierActor::BeginPlay()
{
  Super::BeginPlay();
  if (TargetActor)
  {
    NewTransform = TargetActor->GetActorTransform();
  }
  else {
    TargetActor = nullptr;
  }

  if (Positions.Num() > 0 && TargetActor)
  {
    CurrentPositionIndex = 0; // Empezar en la primera posición
    MoveToNextPosition();
  }
}

// Called when the actor is constructed or properties are changed in the editor
void ATransformModifierActor::OnConstruction(const FTransform& Transform)
{
  Super::OnConstruction(Transform);
  DrawDebugSpheres();
}

// Called every frame
void ATransformModifierActor::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  if (Positions.Num() == 0)
  {
    return;
  }
  // Metodo encargado de modificar el Transform de otro actor 
  //ModifyTargetTransform();

  FVector CurrentPosition = TargetActor->GetActorLocation();
  FVector TargetPosition = Positions[CurrentPositionIndex];

  // Move towards the target position
  FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
  FVector NewPosition = CurrentPosition + Direction * 100 * DeltaTime;

  TargetActor->SetActorLocation(NewPosition);

  // Check if reached the target position
  if (FVector::Dist(NewPosition, TargetPosition) <= 10)
  {
    CurrentPositionIndex++;
    ChangeMaterial();
    if (CurrentPositionIndex >= Positions.Num())
    {
      CurrentPositionIndex = 0;  // Loop back to the start
    }
  }
}

void ATransformModifierActor::ModifyTargetTransform()
{
  if (TargetActor)
  {
    TargetActor->SetActorTransform(NewTransform);
  }
}

void ATransformModifierActor::MoveToNextPosition()
{
  if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex))
  {
    FVector TargetPosition = Positions[CurrentPositionIndex];
    TargetActor->SetActorLocation(TargetPosition);
  }
}

void ATransformModifierActor::ChangeMaterial()
{
  if (TargetActor && Materials.IsValidIndex(CurrentPositionIndex))
  {
    UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(
TargetActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
    if (MeshComponent)
    {
      MeshComponent->SetMaterial(0, Materials[CurrentPositionIndex]);
    }
  }
}

void ATransformModifierActor::DrawDebugSpheres() const
{
  for (const FVector& Position : Positions)
  {
    DrawDebugSphere(GetWorld(), Position, 50.0f, 12, FColor::Green, false, -1.0f, 0, 5.0f);
  }
}