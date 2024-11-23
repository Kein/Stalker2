#include "ThreatIndicator.h"

UThreatIndicator::UThreatIndicator() {
    this->ThreatsOverlay = NULL;
    this->ThreatIndicatorShowDistance = 9000.00f;
    this->ThreatPointerCap = 5;
    this->ThreatsUpdateInterval = 0.01f;
    this->ThreatPointerWidgetClass = NULL;
}


