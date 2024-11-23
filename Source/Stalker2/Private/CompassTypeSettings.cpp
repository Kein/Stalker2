#include "CompassTypeSettings.h"

FCompassTypeSettings::FCompassTypeSettings() {
    this->bIsCompassType = false;
    this->bVisibleIfTrack = false;
    this->CompassPosition = ECompassPosition::Bottom;
    this->ZOrder = 0;
}

