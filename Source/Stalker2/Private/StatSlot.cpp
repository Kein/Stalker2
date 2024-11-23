#include "StatSlot.h"

UStatSlot::UStatSlot() {
    this->Icon = NULL;
    this->Shadow = NULL;
    this->bShouldShowProgress = true;
    this->IconTexture = NULL;
    this->WeakStateOpacityPercent = 0.50f;
    this->BlinkingAnimSpeed = 1.00f;
    this->CurrState = EStatSlotStates::None;
    this->ShowAnim = NULL;
    this->HideAnim = NULL;
    this->BlinkingAnim = NULL;
}


