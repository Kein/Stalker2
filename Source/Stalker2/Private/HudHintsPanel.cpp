#include "HudHintsPanel.h"

UHudHintsPanel::UHudHintsPanel() {
    this->HintHudRestoreHideTime = 3.00f;
    this->HintRestoreHUDNonActiveOpacity = 0.50f;
    this->HintRestoreHUD = NULL;
    this->CommonHintBox = NULL;
    this->ChangeAmmoType = NULL;
    this->ItemSelector = NULL;
    this->OpenInventory = NULL;
    this->OpenMap = NULL;
    this->OpenPDA = NULL;
    this->CommonHintsOpacitySpeedChange = 1.00f;
    this->RestoreOpacitySpeedChange = 3.00f;
}

void UHudHintsPanel::UpdateInputDependent() {
}


