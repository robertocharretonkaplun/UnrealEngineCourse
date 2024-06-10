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

// M�todo para disparar el evento sin par�metros
void ACustomEventExample::TriggerCustomEvent()
{
  OnCustomEvent.Broadcast();
}

// M�todo para disparar el evento con un par�metro
void ACustomEventExample::TriggerCustomEventWithParam(int32 CustomValue)
{
  OnCustomEventWithParam.Broadcast(CustomValue);
}
