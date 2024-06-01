// MyActor.cpp
#include "AMyActor.h"

AMyActor::AMyActor() 
{
  PrimaryActorTick.bCanEverTick = true;
  MyRawPointer = nullptr;
  MyUObjectPointer = nullptr;
  MySharedPointer = nullptr;
}

void AMyActor::BeginPlay()
{
  Super::BeginPlay();

  // Ejemplo de uso de puntero crudo
  if (MyRawPointer)
  {
    MyRawPointer->Destroy();
  }

  // Ejemplo de uso de puntero a UObject
  if (MyUObjectPointer)
  {
    MyUObjectPointer->Destroy();
  }

  // Ejemplo de uso de puntero inteligente
  if (MySharedPointer.IsValid())
  {
    MySharedPointer->Destroy();
  }
}

void AMyActor::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
}
