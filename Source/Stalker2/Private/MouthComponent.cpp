#include "MouthComponent.h"

UMouthComponent::UMouthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerObj = NULL;
    this->StaminaRTPC = NULL;
    this->HealthRTPC = NULL;
    this->HealthBreathCurve = NULL;
    this->StaminaBreathCurve = NULL;
    this->HealthBreathIntensityCurve = NULL;
    this->StaminaBreathIntensityCurve = NULL;
    this->DefaultBreathTypeSwitch = NULL;
    this->HoldBreathBreathTypeSwitch = NULL;
}


