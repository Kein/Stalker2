#include "LightBulbComponent.h"

ULightBulbComponent::ULightBulbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFlicker = false;
    this->bAutoLightOnNight = false;
}

void ULightBulbComponent::SetFlicker(const bool bInFlicker) {
}

void ULightBulbComponent::SetAutoLightOnNight(const bool bInAutoLightOnNight) {
}

bool ULightBulbComponent::IsFlicker() const {
    return false;
}

bool ULightBulbComponent::IsAutoLightOnNight() const {
    return false;
}


