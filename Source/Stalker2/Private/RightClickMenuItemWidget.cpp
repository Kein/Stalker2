#include "RightClickMenuItemWidget.h"

URightClickMenuItemWidget::URightClickMenuItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonClick = NULL;
    this->Label = NULL;
    this->UnhoveredBackground = NULL;
    this->HoveredBackground = NULL;
    this->MenuItemWidgetClass = NULL;
}

void URightClickMenuItemWidget::OnButtonUnHovered() {
}

void URightClickMenuItemWidget::OnButtonHovered() {
}

void URightClickMenuItemWidget::OnButtonClick() {
}


