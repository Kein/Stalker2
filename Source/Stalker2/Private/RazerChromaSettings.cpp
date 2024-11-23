#include "RazerChromaSettings.h"

URazerChromaSettings::URazerChromaSettings() {
    this->ContentBasePath = TEXT("Razer/Animations/");
    this->AnimationSuffix = TEXT(".chroma");
    this->SupportedDevices.AddDefaulted(6);
    this->OneTimeEventLifetime = 0.10f;
    this->DamageEvents.AddDefaulted(1);
}


