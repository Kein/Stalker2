#include "ModioCommonMultiLineEditableTextBox.h"
#include "Templates/SubclassOf.h"

UModioCommonMultiLineEditableTextBox::UModioCommonMultiLineEditableTextBox() {
    this->ModioStyle = NULL;
    this->IsCaretMovedWhenGainFocus = false;
    this->SelectAllTextWhenFocused = false;
    this->RevertTextOnEscape = false;
    this->ClearKeyboardFocusOnCommit = false;
    this->SelectAllTextOnCommit = false;
    this->AlwaysShowScrollbars = false;
    this->AllowMultiLine = false;
    this->VirtualKeyboardTrigger = EVirtualKeyboardTrigger::OnFocusByPointer;
    this->OverflowPolicy = ETextOverflowPolicy::Clip;
}

void UModioCommonMultiLineEditableTextBox::SetStyle(TSubclassOf<UModioCommonMultiLineEditableTextBoxStyle> InStyle) {
}

bool UModioCommonMultiLineEditableTextBox::IsTextBoxFocused() const {
    return false;
}


