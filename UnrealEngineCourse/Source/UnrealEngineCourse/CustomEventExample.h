// CustomEventExample.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Delegates/DelegateCombinations.h" // Incluir el archivo correcto para las macros de delegado
#include "CustomEventExample.generated.h"

// Declarar un evento din�mico multicast sin par�metros
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCustomEvent);

// Declarar un evento din�mico multicast con un par�metro
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

  // Declarar el evento como una variable p�blica
  UPROPERTY(BlueprintAssignable, Category = "CustomEvent")
    FOnCustomEvent OnCustomEvent;

  // Declarar el evento con un par�metro
  UPROPERTY(BlueprintAssignable, Category = "CustomEvent")
    FOnCustomEventWithParam OnCustomEventWithParam;

  // M�todo para disparar el evento sin par�metros
  UFUNCTION(BlueprintCallable, Category = "CustomEvent")
    void TriggerCustomEvent();

  // M�todo para disparar el evento con un par�metro
  UFUNCTION(BlueprintCallable, Category = "CustomEvent")
    void TriggerCustomEventWithParam(int32 CustomValue);
};
