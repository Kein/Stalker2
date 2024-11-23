#include "RightClickMenuWidget.h"

URightClickMenuWidget::URightClickMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Menu = NULL;
    this->Left_NoTile = NULL;
    this->Right_NoTile = NULL;
    this->MenuItemWidgetClass = NULL;
    this->RadiationMark = NULL;
    this->NoTileBordersElementsNum = 3;
}

void URightClickMenuWidget::OnNoItemClick() {
}

void URightClickMenuWidget::OnItemHover(const FRightClickMenuItemData& Data, const bool bInHover) {
}

void URightClickMenuWidget::OnItemClicked(const FRightClickMenuItemData& Data) {
}


