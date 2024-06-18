// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformActor2.h"

// Sets default values
APlatformActor2::APlatformActor2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Inicializamos el componente
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	// Inicializacion de nuestra variables
	MovementSpeed = 100.0f;
	MovementAmplitud = 500.0f;
	isMovingRight = true;

	// Collisions
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(RootComponent);
	CollisionComponent->SetBoxExtent(FVector(5.0f, 5.0f,5.0f));
	CollisionComponent->SetCollisionProfileName("BlockAllDynamic");
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APlatformActor2::OnOverlapBegin);
}

// Called when the game starts or when spawned
void APlatformActor2::BeginPlay()
{
	Super::BeginPlay();
	ChangeMaterial(DefaultMaterial);
}

// Called every frame
void APlatformActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Accedemos a la posicion actual de actor
	FVector CurrentLocation = GetActorLocation();

	float Movement = MovementSpeed * DeltaTime;

	// Revisamos si se llego al limite e invertimos la direccion
	if (isMovingRight)
	{
		CurrentLocation.Y += Movement;
		if (CurrentLocation.Y > InitialLocation.Y + MovementAmplitud)
		{
			isMovingRight = false;
		}
	}
	else {
		CurrentLocation.Y -= Movement;
		if (CurrentLocation.Y < InitialLocation.Y - MovementAmplitud)
		{
			isMovingRight = true;
		}
	}

	SetActorLocation(CurrentLocation);
}

void 
APlatformActor2::ChangeMaterial(UMaterialInterface* newMaterial) {
	if (newMaterial && MeshComponent)
	{
		MeshComponent->SetMaterial(0, newMaterial);
	}
}

void APlatformActor2::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		Destroy(); // Destroy this actor
	}
}
