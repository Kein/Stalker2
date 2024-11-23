#include "EjectedMagazine.h"
#include "Components/StaticMeshComponent.h"
#include "HittableComponent.h"
#include "PhysicsSoundsComponent.h"

AEjectedMagazine::AEjectedMagazine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->PhysicsSoundsComponent = CreateDefaultSubobject<UPhysicsSoundsComponent>(TEXT("PhysicsSoundsComponent"));
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("HittableComponent"));
}

void AEjectedMagazine::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


