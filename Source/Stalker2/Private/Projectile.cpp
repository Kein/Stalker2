#include "Projectile.h"
#include "Components/SphereComponent.h"

AProjectile::AProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->CollisionComp = (USphereComponent*)RootComponent;
    this->FlybySound = NULL;
}

void AProjectile::OnOverlap(const FHitResult& Hit) {
}


