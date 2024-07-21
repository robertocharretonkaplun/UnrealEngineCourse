// Fill out your copyright notice in the Description page of Project Settings.


#include "StructorActor.h"

// Sets default values
AStructorActor::AStructorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStructorActor::BeginPlay()
{
	Super::BeginPlay();
	// Print data to log
	PrintData();
}

// Called every frame
void AStructorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStructorActor::InitializeData()
{
  // Initialize TArray
  IntArray.Add(1);
  IntArray.Add(2);
  IntArray.Add(3);

  // Initialize TMap
  StringIntMap.Add(TEXT("One"), 1);
  StringIntMap.Add(TEXT("Two"), 2);
  StringIntMap.Add(TEXT("Three"), 3);

  // Initialize TSet
  StringSet.Add(TEXT("Apple"));
  StringSet.Add(TEXT("Banana"));
  StringSet.Add(TEXT("Cherry"));
}

void AStructorActor::PrintData()
{
  // Print TArray data
  UE_LOG(LogTemp, Warning, TEXT("TArray Elements:"));
  for (int32 Num : IntArray)
  {
    UE_LOG(LogTemp, Warning, TEXT("%d"), Num);
  }

  // Print TMap data
  UE_LOG(LogTemp, Warning, TEXT("TMap Elements:"));
  for (const TPair<FString, int32>& Pair : StringIntMap)
  {
    UE_LOG(LogTemp, Warning, TEXT("%s: %d"), *Pair.Key, Pair.Value);
  }

  // Print TSet data
  UE_LOG(LogTemp, Warning, TEXT("TSet Elements:"));
  for (const FString& Element : StringSet)
  {
    UE_LOG(LogTemp, Warning, TEXT("%s"), *Element);
  }
}

