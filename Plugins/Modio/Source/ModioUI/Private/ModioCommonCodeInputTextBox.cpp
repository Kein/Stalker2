#include "ModioCommonCodeInputTextBox.h"
#include "Templates/SubclassOf.h"

UModioCommonCodeInputTextBox::UModioCommonCodeInputTextBox() {
    this->ModioStyle = NULL;
    this->TextFlowDirection = ETextFlowDirection::LeftToRight;
    this->VirtualKeyboardTrigger = EVirtualKeyboardTrigger::OnFocusByPointer;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
    this->NumberOfCharacters = 5;
}

void UModioCommonCodeInputTextBox::SetStyle(TSubclassOf<UModioCommonCodeInputTextBoxStyle> InStyle) {
}

void UModioCommonCodeInputTextBox::SetCodeString(const FString& InCodeString) {
}

FString UModioCommonCodeInputTextBox::GetCodeString() const {
    return TEXT("");
}


