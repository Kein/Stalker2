#include "ModioCommonEditableTextBox.h"
#include "Templates/SubclassOf.h"

UModioCommonEditableTextBox::UModioCommonEditableTextBox() {
    this->ModioStyle = NULL;
}

void UModioCommonEditableTextBox::SetStyle(TSubclassOf<UModioCommonEditableTextBoxStyle> InStyle) {
}

bool UModioCommonEditableTextBox::IsTextBoxFocused() const {
    return false;
}


