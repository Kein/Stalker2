#include "StackSplittingWidget.h"

UStackSplittingWidget::UStackSplittingWidget() {
    this->TextBlock_AmountToDrop = NULL;
    this->Slider_ItemSplit = NULL;
    this->TextBlock_FullAmount = NULL;
    this->Button_Cancel = NULL;
    this->Button_Split = NULL;
    this->TextBlock_Split = NULL;
    this->ItemImage = NULL;
    this->HeaderText = NULL;
    this->ItemName = NULL;
}

void UStackSplittingWidget::OnSplitValueChanged(float Value) {
}

void UStackSplittingWidget::OnSplitButtonClicked() {
}

void UStackSplittingWidget::OnCancelButtonClicked() {
}


