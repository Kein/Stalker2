#include "HintViewBase.h"

UHintViewBase::UHintViewBase() {
    this->bInitializeAutomatically = true;
    this->HintIconImage = NULL;
    this->HintIconImageDisabled = NULL;
    this->ProgressMaterial = NULL;
    this->ViewSizeBox = NULL;
    this->PressAnimation = NULL;
    this->PressAnimationSpeedMultiplier = 10.00f;
}


