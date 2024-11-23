#include "CrosshairWidgetBase.h"

UCrosshairWidgetBase::UCrosshairWidgetBase() {
    this->DelayInterpol = 0.20f;
    this->ShowCrosshairAnim = NULL;
    this->HideCrosshairAnim = NULL;
    this->bEnableCrosshairAnimation = true;
    this->CrosshairAnimationSpeed = 1.00f;
}


