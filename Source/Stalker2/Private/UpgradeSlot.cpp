#include "UpgradeSlot.h"

UUpgradeSlot::UUpgradeSlot() {
    this->UpgradeImage = NULL;
    this->TopConnectionLine = NULL;
    this->MiddleConnectionLine = NULL;
    this->DownConnectionLine = NULL;
    this->Locked = NULL;
    this->Blueprint = NULL;
    this->Highlighted = NULL;
    this->Mod = NULL;
    this->Border = NULL;
    this->Discount = NULL;
    this->UpgradeButton = NULL;
    this->SettingsAsset = NULL;
}

void UUpgradeSlot::Unhighlight() {
}

void UUpgradeSlot::OnUpgradeButtonClick() {
}

void UUpgradeSlot::Highlight() {
}


