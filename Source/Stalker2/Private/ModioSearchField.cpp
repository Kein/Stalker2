#include "ModioSearchField.h"

UModioSearchField::UModioSearchField() {
    this->SearchHint = NULL;
    this->SearchTextBox = NULL;
}

void UModioSearchField::HandleOnTextCommitted(const FText& Text, const TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

FString UModioSearchField::GetSearchKeywords() const {
    return TEXT("");
}


