#include "WaterComponent.h"

UWaterComponent::UWaterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAffectedByRain = true;
    this->RegularWaterMaterial = NULL;
}

void UWaterComponent::OnEndOverlap(AActor* OverlappedComponent, AActor* OtherActor) {
}

void UWaterComponent::OnBeginOverlap(AActor* OverlappedComponent, AActor* OtherActor) {
}


