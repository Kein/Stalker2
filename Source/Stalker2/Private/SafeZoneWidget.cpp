#include "SafeZoneWidget.h"

USafeZoneWidget::USafeZoneWidget() {
    this->Speed = 0.00f;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->MaxX = 0.00f;
    this->MaxY = 0.00f;
    this->DefaultScale = 0.00f;
    this->ValueX = 0.00f;
    this->LeftTopCorner = NULL;
    this->RightTopCorner = NULL;
    this->LeftDownCorner = NULL;
    this->RightDownCorner = NULL;
    this->Border = NULL;
}

void USafeZoneWidget::HandleEditSafeZoneMoveBordersIncreaseWidth() {
}

void USafeZoneWidget::HandleEditSafeZoneMoveBordersIncreaseHeight() {
}

void USafeZoneWidget::HandleEditSafeZoneMoveBordersDecreaseWidth() {
}

void USafeZoneWidget::HandleEditSafeZoneMoveBordersDecreaseHeight() {
}


