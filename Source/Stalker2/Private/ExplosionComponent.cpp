#include "ExplosionComponent.h"

UExplosionComponent::UExplosionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionParticles = NULL;
}

void UExplosionComponent::ExplodeWithCustomLocation(const FVector Location, const FUID ExplosionInstigatorUID) {
}

void UExplosionComponent::ExplodeAtCustomLocation(const FVector Location, UObject* ExplosionInstigator) {
}

void UExplosionComponent::Explode(const FUID ExplosionInstigatorUID) {
}


