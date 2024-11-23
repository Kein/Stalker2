#include "ModioEmailAuthPopup.h"

UModioEmailAuthPopup::UModioEmailAuthPopup() {
    this->ValidationText = NULL;
    this->EmailTextBox = NULL;
}

void UModioEmailAuthPopup::OnEditableTextBoxTextChanged(const FText& Text) {
}

FString UModioEmailAuthPopup::GetEmail() const {
    return TEXT("");
}


