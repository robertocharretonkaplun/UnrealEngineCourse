// CustomEventExample.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Delegates/DelegateCombinations.h" // Incluir el archivo correcto para las macros de delegado
#include "CustomEventExample.generated.h"

// Declarar un evento dinámico multicast sin parámetros
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCustomEvent);

// Declarar un evento dinámico multicast con un parámetro
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomEventWithParam, int32, CustomValue);


UCLASS()
class UNREALENGINECOURSE_API ACustomEventExample : public AActor
{
  GENERATED_BODY()

public:
  // Sets default values for this actor's properties
  ACustomEventExample();

protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;

  // Declarar el evento como una variable pública
  UPROPERTY(BlueprintAssignable, Category = "CustomEvent")
    FOnCustomEvent OnCustomEvent;

  // Declarar el evento con un parámetro
  UPROPERTY(BlueprintAssignable, Category = "CustomEvent")
    FOnCustomEventWithParam OnCustomEventWithParam;

  // Método para disparar el evento sin parámetros
  UFUNCTION(BlueprintCallable, Category = "CustomEvent")
    void TriggerCustomEvent();

  // Método para disparar el evento con un parámetro
  UFUNCTION(BlueprintCallable, Category = "CustomEvent")
    void TriggerCustomEventWithParam(int32 CustomValue);
};
