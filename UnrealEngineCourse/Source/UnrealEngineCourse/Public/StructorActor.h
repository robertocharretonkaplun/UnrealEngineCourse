// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../UnrealEngineCourseCharacter.h"
#include "StructorActor.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AStructorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStructorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// TArray example
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "STRUCTURES")
	TArray<int32> IntArray;

	// TMap example
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "STRUCTURES")
	TMap<FString, int32> StringIntMap;

	// TSet example
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "STRUCTURES")
	TSet<FString> StringSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "STRUCTURES")
		TArray<AUnrealEngineCourseCharacter*> CharactersArray;

	void InitializeData();
	void PrintData();
};
