#include "VictoryInput.h"

FVictoryInput::FVictoryInput() {
    this->bShift = false;
    this->bCtrl = false;
    this->bAlt = false;
    this->bCmd = false;
    this->bGamepad = false;
    this->Category = EKeyCategory::Movement;
}

