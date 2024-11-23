#include "CrosshairWidgetSwitcher.h"

UCrosshairWidgetSwitcher::UCrosshairWidgetSwitcher() {
    this->CrosshairSwitcher = NULL;
    this->ShowCrosshairAnim = NULL;
    this->HideCrosshairAnim = NULL;
    this->BlockHideCrosshairAnim = NULL;
    this->bUseDiffirentCrosshairType = true;
    this->DefaultCrosshairType = ECrosshairType::Cross;
    this->CrosshairAnimationAimSpeed = 1.00f;
    this->CurrCrosshairWidget = NULL;
}


