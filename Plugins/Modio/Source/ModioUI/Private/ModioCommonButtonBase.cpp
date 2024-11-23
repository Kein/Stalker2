#include "ModioCommonButtonBase.h"

UModioCommonButtonBase::UModioCommonButtonBase() {
    this->bShouldTriggerButtonClickOnEnterOrGamepadAccept = true;
    this->bFocusOnHover = true;
    this->TextBlock = NULL;
    this->Icon = NULL;
    this->ModioDefaultStyleClass = NULL;
    this->ModioFocusedStyleClass = NULL;
}

void UModioCommonButtonBase::SetLabel(FText NewLabel) {
}

void UModioCommonButtonBase::SetButtonFocus() {
}


