#include "Wind.h"

FWind::FWind() {
    this->FoliageWindIntensity = 0.00f;
    this->PreviousFoliageWindIntensity = 0.00f;
    this->Intensity = 0.00f;
    this->WindDirectionChangeIntensity = 0.00f;
    this->bLockedDirection = false;
}

