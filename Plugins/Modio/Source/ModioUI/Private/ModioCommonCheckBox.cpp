#include "ModioCommonCheckBox.h"
#include "Templates/SubclassOf.h"

UModioCommonCheckBox::UModioCommonCheckBox() {
    this->ModioStyle = NULL;
    this->LabelTextBlock = NULL;
}

void UModioCommonCheckBox::SetStyle(TSubclassOf<UModioCommonCheckBoxStyle> InStyle) {
}

void UModioCommonCheckBox::SetLabel(const FText& InLabelText) {
}

void UModioCommonCheckBox::HandleOnCheckStateChanged_Implementation(bool bIsChecked) {
}

FText UModioCommonCheckBox::GetLabelTextBlockText() const {
    return FText::GetEmpty();
}

FText UModioCommonCheckBox::GetLabel() const {
    return FText::GetEmpty();
}

FMargin UModioCommonCheckBox::GetCheckboxContentPadding_Implementation() const {
    return FMargin{};
}


