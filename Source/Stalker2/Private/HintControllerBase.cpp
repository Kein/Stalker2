#include "HintControllerBase.h"

UHintControllerBase::UHintControllerBase() {
    this->bInitializeAutomatically = false;
    this->PlatformSwitcher = NULL;
    this->LeftText = NULL;
    this->LeftGap = NULL;
    this->RightText = NULL;
    this->RightGap = NULL;
}


