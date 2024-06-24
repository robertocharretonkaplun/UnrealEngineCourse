#include "SimpleActor.h"

// Sets default values
ASimpleActor::ASimpleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

  // Mesh
  MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
  RootComponent = MeshComponent;

  // Collisions
  CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
  CollisionComponent->SetupAttachment(RootComponent);
  CollisionComponent->SetBoxExtent(FVector(1.0f, 1.0f, 1.0f));
  CollisionComponent->SetCollisionProfileName("BlockAllDynamic");
  CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ASimpleActor::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ASimpleActor::BeginPlay()
{
	Super::BeginPlay();
  ChangeMaterial(DefaultMaterial);
}

// Called every frame
void ASimpleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void
ASimpleActor::ChangeMaterial(UMaterialInterface* NewMaterial)
{
  if (NewMaterial && MeshComponent)
  {
    MeshComponent->SetMaterial(0, NewMaterial);
  }
}

void ASimpleActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
                                     AActor* OtherActor, 
                                     UPrimitiveComponent* OtherComp, 
                                     int32 OtherBodyIndex, 
                                     bool bFromSweep, 
                                     const FHitResult& SweepResult)
{
  if (OtherActor && (OtherActor != this) && OtherComp)
  {
    if (OtherActor->Tags[0] == "Detector") {
      Destroy(); // Destroy this actor
    }
  }
}
