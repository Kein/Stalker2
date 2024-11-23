#include "TextWidget.h"

UTextWidget::UTextWidget() {
    this->DefaultWrapText = 0.00f;
    this->bUseWrappingFromStyle = true;
    this->bEnableStyleManager = true;
    this->bEnableScroll = false;
    this->CommonTextObj = NULL;
}

void UTextWidget::SetText(FText InText) {
}

FText UTextWidget::GetText() {
    return FText::GetEmpty();
}


