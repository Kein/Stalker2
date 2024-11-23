#include "GaussDisplay.h"

AGaussDisplay::AGaussDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DischargeAnimationTime = 0.00f;
    this->ChargeAnimationTime = 0.00f;
    this->ReloadVFX = NULL;
    this->ReloadVFXComponent = NULL;
}


