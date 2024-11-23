#include "AnimPlayerLookAtData.h"

FAnimPlayerLookAtData::FAnimPlayerLookAtData() {
    this->EnteringSpeed = NULL;
    this->CenteringSpeed = NULL;
    this->CursorFreemoveDistanceFactor = NULL;
    this->CursorApproachDirectionFactor = NULL;
    this->CenteringTime = 0.00f;
    this->PlayerLookAtTimer = 0.00f;
    this->MaxFreemoveSpeed = 0.00f;
    this->MinStopSpeed = 0.00f;
    this->DialogEnteringTime = 0.00f;
    this->SwitchTargertFactor = 0.00f;
}

