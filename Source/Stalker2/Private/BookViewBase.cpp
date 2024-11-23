#include "BookViewBase.h"

UBookViewBase::UBookViewBase() {
    this->DefaultPageIndex = 0;
    this->bShouldOpenDefaultPage = true;
    this->bShouldEnableNavigation = true;
    this->bShouldEnableClick = true;
    this->Switcher = NULL;
    this->NavigationPanel = NULL;
}

void UBookViewBase::ClickMenuButton(int32 InButtonIndex) {
}

void UBookViewBase::ChangeSelectButton() {
}


