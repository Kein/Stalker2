#include "SettingElementSwitcher.h"

USettingElementSwitcher::USettingElementSwitcher() {
    this->Value = 0;
    this->bLocalizeValues = true;
    this->DisableDependenciesWhenValueIs = -1;
    this->bWrapValueAround = false;
    this->bUpdateDescriptionOnValueChange = false;
    this->bReverseValues = false;
}

void USettingElementSwitcher::SortValues() {
}


