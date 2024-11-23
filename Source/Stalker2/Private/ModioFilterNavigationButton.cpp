#include "ModioFilterNavigationButton.h"

UModioFilterNavigationButton::UModioFilterNavigationButton() {
    this->SelectLine = NULL;
    this->IconImage = NULL;
    this->TextWidget = NULL;
    this->bEnableLocalisation = true;
    this->bEnableSelectAnimation = false;
    this->bEnableByDefault = false;
    this->ButtonIndex = -1;
    this->SetStyleIconImageTexture = NULL;
}


