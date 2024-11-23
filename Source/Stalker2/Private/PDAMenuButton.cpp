#include "PDAMenuButton.h"

UPDAMenuButton::UPDAMenuButton() {
    this->SelectLine = NULL;
    this->Notify = NULL;
    this->ButtonText = NULL;
    this->bEnableLocalisation = true;
    this->bEnableSelectAnimation = false;
    this->SetStyleIdHover = TEXT("PDAMenuButtonsTopMenuHover");
    this->SetStyleIdUnHover = TEXT("PDAMenuButtonsTopMenuUnHover");
}


