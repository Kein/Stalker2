#include "HittableComponent.h"

UHittableComponent::UHittableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanHitWater = true;
}


