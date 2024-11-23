#include "ModioCommonEmailAuthView.h"

UModioCommonEmailAuthView::UModioCommonEmailAuthView() {
    this->TitleTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->ValidationTextBlock = NULL;
    this->EmailTextBox = NULL;
    this->BackButton = NULL;
    this->SubmitButton = NULL;
    this->CancelButton = NULL;
}

void UModioCommonEmailAuthView::SetValidationTextVisibility_Implementation(ESlateVisibility Visbility) {
}

void UModioCommonEmailAuthView::OnEditableTextBoxTextChanged_Implementation(const FText& InText) {
}

bool UModioCommonEmailAuthView::IsEmailValid_Implementation(const FString& Email) {
    return false;
}


