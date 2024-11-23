#include "StatPanelDataAsset.h"

UStatPanelDataAsset::UStatPanelDataAsset() {
    this->HealthBarReduce = 0.50f;
    this->HealthBarUpdate = 0.05f;
    this->HealthBarUpdateDelay = 2.00f;
    this->HealthBarCriticalLevel = 0.33f;
    this->HealthBarCriticalSpeed = 0.20f;
    this->HealthBarRestoreSpeed = 0.33f;
    this->HealthBarFadeOut = 0.70f;
    this->HealthBarFadeIn = 0.70f;
    this->OnImmidiatlyDeathWhiteBarReduceDelay = 1.00f;
    this->StatPanelHideDelay = 1.50f;
    this->OngoingDamageWhiteBarReduceDelay = 1.50f;
    this->StaminaBarCriticalLevel = 0.33f;
    this->StaminaBarCriticalSpeed = 0.20f;
    this->RadBarGrowSpeed = 2.00f;
    this->RadBarRestoreSpeed = 2.00f;
    this->RadBarProgressParameterName = TEXT("RadiationIntensity");
    this->BleedingFadeOut = 0.70f;
    this->BleedingFadeIn = 0.70f;
    this->OverloadFadeOut = 0.70f;
    this->OverloadFadeIn = 0.70f;
    this->HungerFadeOut = 0.70f;
    this->HungerFadeIn = 0.70f;
    this->SleepinessFadeOut = 0.70f;
    this->SleepinessFadeIn = 0.70f;
}


