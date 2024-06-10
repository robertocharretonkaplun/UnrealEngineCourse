#include "CustomEventExample.h"

// Establecer valores predeterminados
ACustomEventExample::ACustomEventExample()
{
  // Configurar este actor para llamar a Tick() cada cuadro.
  PrimaryActorTick.bCanEverTick = true;
}

// Llamado cuando el juego comienza o cuando se genera
void ACustomEventExample::BeginPlay()
{
  Super::BeginPlay();
}

// Llamado cada cuadro
void ACustomEventExample::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
}

// Método para disparar el evento sin parámetros
void ACustomEventExample::TriggerCustomEvent()
{
  OnCustomEvent.Broadcast();
}

// Método para disparar el evento con un parámetro
void ACustomEventExample::TriggerCustomEventWithParam(int32 CustomValue)
{
  OnCustomEventWithParam.Broadcast(CustomValue);
}
