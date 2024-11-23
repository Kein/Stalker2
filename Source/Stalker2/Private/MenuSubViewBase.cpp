#include "MenuSubViewBase.h"

UMenuSubViewBase::UMenuSubViewBase() {
    this->PauseText = NULL;
    this->ButtonPanel = NULL;
    this->MenuButtonModel = NULL;
    this->DefaultSelectedIndex = 0;
    this->SpaceBetweenOptions = 0.00f;
    this->ScrollBox = NULL;
    this->SelectedButton = NULL;
}

void UMenuSubViewBase::SelectOptionWidget(UMenuButtonBase* ButtonWidget) {
}


