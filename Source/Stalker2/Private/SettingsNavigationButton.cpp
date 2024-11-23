#include "SettingsNavigationButton.h"

USettingsNavigationButton::USettingsNavigationButton() {
    this->SelectLine = NULL;
    this->ButtonText = NULL;
    this->bEnableLocalisation = true;
    this->bEnableSelectAnimation = false;
    this->bEnableByDefault = false;
    this->ButtonIndex = -1;
    this->SetStyleIdHover = TEXT("PDAMenuButtonsTopMenuHover");
    this->SetStyleIdUnHover = TEXT("PDAMenuButtonsTopMenuUnHover");
    this->bShouldHideOnPresentation = false;
    this->Category = ESettingCategoryType::None;
    this->bEnablePopupOnSlotSwitch = true;
}


