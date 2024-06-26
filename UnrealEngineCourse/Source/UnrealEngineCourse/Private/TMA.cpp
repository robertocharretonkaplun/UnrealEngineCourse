// Fill out your copyright notice in the Description page of Project Settings.


#include "TMA.h"
#include "DrawDebugHelpers.h"

// Sets default values
ATMA::ATMA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATMA::BeginPlay()
{
	Super::BeginPlay();
	
	// Revisar si existe un target seleccionado
	if (TargetActor)
	{
		NewTransform = TargetActor->GetActorTransform();
	}
	else {
		TargetActor = nullptr;
	}

	// Validar si existen puntos en el array
	if (Positions.Num() > 0 && TargetActor)
	{
		MoveToNextPosition();
	}
}

void ATMA::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	DrawDebugSpheres();
}

// Called every frame
void ATMA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//ModifyTargetTransform();

	// Validar que existan puntos
	if (Positions.Num() == 0)
	{
		return;
	}

	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPostion = Positions[CurrentPositionIndex];


	// Mover el target
	FVector Direction = (TargetPostion - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100.0f * DeltaTime;

	TargetActor->SetActorLocation(NewPosition);

	// Revisar si llegamos target position
	if (FVector::Dist(NewPosition, TargetPostion) <= 10.0f)
	{
		CurrentPositionIndex++;
		ChangeMaterial();

		// Revisar si el indice es mayor al tamaño del arreglo
		if (CurrentPositionIndex >= Positions.Num())
		{
			CurrentPositionIndex = 0;
		}
	}
}

void ATMA::ModifyTargetTransform()
{
	if (TargetActor)
	{
		TargetActor->SetActorTransform(NewTransform);
	}
}

void ATMA::MoveToNextPosition()
{
	// Validar que exista target actor y ademas exista una posicion valida en lista
	if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex))
	{
		FVector TargetPosition = Positions[CurrentPositionIndex];
		TargetActor->SetActorLocation(TargetPosition);
	}
}

void ATMA::ChangeMaterial()
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

void ATMA::DrawDebugSpheres() const
{
	for (const FVector& Position : Positions )
	{
		DrawDebugSphere(GetWorld(), Position, 50.0f, 12, FColor::Cyan, false, -1.0f, 5.0f);
	}
}

