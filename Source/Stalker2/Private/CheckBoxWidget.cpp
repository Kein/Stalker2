#include "CheckBoxWidget.h"

UCheckBoxWidget::UCheckBoxWidget() {
    this->ImageObj = NULL;
    this->bShouldStartChecked = false;
    this->bEnableMouseEvent = true;
    this->bEnableHoverRecolor = true;
    this->bEnableStyleManager = true;
}

void UCheckBoxWidget::SetChecked(const bool bInChecked, const bool bBrodcastOnChangeCheck) {
}

bool UCheckBoxWidget::GetChecked() const {
    return false;
}


