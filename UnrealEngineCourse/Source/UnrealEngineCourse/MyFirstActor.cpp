// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstActor.h"

// Sets default values
AMyFirstActor::AMyFirstActor()
{
 	// Set this actor to call Tick() every frame.  
  // You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Inicializar variables
	IntegerVariable = 10;
	FloatVariable = 20.5f;
	bBooleanVariable = true;
}

// Called when the game starts or when spawned
void AMyFirstActor::BeginPlay()
{
	Super::BeginPlay();

	// Llamar a la función que demuestra los fundamentos
	DemonstrateFundamentals();
}

// Called every frame
void AMyFirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Ejemplo de estructura de control en Tick
	//if (IntegerVariable > 10)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("IntegerVariable is greater than 10"));
	//}
	//else
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("IntegerVariable is 10 or less"));
	//}
}


void AMyFirstActor::ExampleFunction()
{
  // Operadores aritméticos
  int32 Sum = IntegerVariable + 5;
  float Product = FloatVariable * 2.0f;

  // Operadores lógicos
  bool bResult = (IntegerVariable > 5) && bBooleanVariable;

  // Estructuras de control
  if (bResult)
  {
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("bResult is true"));
  }
  else
  {
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("bResult is false"));
  }

  // Bucle for
  for (int32 i = 0; i < 5; i++)
  {
    FString DebugMessage = FString::Printf(TEXT("Loop iteration: %d"), i);
    GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, DebugMessage);
  }

  // Bucle while
  int32 Counter = 0;
  while (Counter < 3)
  {
    FString DebugMessage = FString::Printf(TEXT("While loop count: %d"), Counter);
    GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, DebugMessage);
    Counter++;
  }
}

void AMyFirstActor::DemonstrateFundamentals()
{
  // Operadores aritméticos
  int32 Sum = IntegerVariable + 5;
  float Product = FloatVariable * 2.0f;

  // Operadores lógicos
  bool bResult = (IntegerVariable > 5) && bBooleanVariable;

  // Estructuras de control
  if (bResult)
  {
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("bResult is true"));
  }
  else
  {
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("bResult is false"));
  }

  // Bucle for
  for (int32 i = 0; i < 5; i++)
  {
    FString DebugMessage = FString::Printf(TEXT("Loop iteration: %d"), i);
    GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, DebugMessage);
  }

  // Bucle while
  int32 Counter = 0;
  while (Counter < 3)
  {
    FString DebugMessage = FString::Printf(TEXT("While loop count: %d"), Counter);
    GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, DebugMessage);
    Counter++;
  }
}

