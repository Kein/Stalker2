#include "SettingElement.h"

USettingElement::USettingElement() {
    this->bShouldHideOnShipping = false;
    this->bShouldHideOnPresentation = false;
    this->HoveredTextStyle = TEXT("SettingElementHover");
    this->TextStyle = TEXT("SettingElement");
    this->Background = NULL;
    this->HoveredBackground = NULL;
    this->UnhoveredBackground = NULL;
    this->NameText = NULL;
    this->ValueText = NULL;
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->LeftButtonImage = NULL;
    this->RightButtonImage = NULL;
    this->ProgressBar = NULL;
    this->Slider = NULL;
    this->InputTypeToDisplayButton = EInputTypeForButtons::Both;
    this->bIsSpecialButton = false;
    this->Settings = NULL;
}

void USettingElement::OnRightButtonClicked() {
}

void USettingElement::OnLeftButtonClicked() {
}

bool USettingElement::GetIsEnabledElement() const {
    return false;
}


