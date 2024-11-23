#include "SaveScreenSubView.h"

USaveScreenSubView::USaveScreenSubView() {
    this->SaveButtonActionPrototype = NULL;
    this->SaveButtonStyleClass = NULL;
    this->NewSaveButtonActionPrototype = NULL;
    this->NewSaveButtonStyleClass = NULL;
    this->BlockedButtonStyleClass = NULL;
    this->bLoadPage = false;
    this->BlockedSaveButtonAction = NULL;
    this->SaveButtonAction = NULL;
    this->NavigationPanel = NULL;
}

void USaveScreenSubView::OnNavigationButtonPressed(const int32 InButtonIndex) {
}


