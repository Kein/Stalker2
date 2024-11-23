#include "StatPanel.h"

UStatPanel::UStatPanel() {
    this->VitalsOverlay = NULL;
    this->StatWeight = NULL;
    this->StatSleep = NULL;
    this->StatHunger = NULL;
    this->StatBleeding = NULL;
    this->HPProgress = NULL;
    this->HPProgressWhite = NULL;
    this->HPProgressDark = NULL;
    this->Stamina = NULL;
    this->RadiationProgress = NULL;
    this->BlinkingStaminaAnim = NULL;
    this->BlinkingHPAnim = NULL;
    this->VitalsOverlayHideAnim = NULL;
    this->VitalsOverlayShowAnim = NULL;
    this->SettingsAsset = NULL;
    this->HPProgressCurve = NULL;
}

void UStatPanel::UpdateAllStats() {
}


