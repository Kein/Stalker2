#include "ModioCommonReportEmailView.h"

UModioCommonReportEmailView::UModioCommonReportEmailView() {
    this->TitleTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->ValidationTextBlock = NULL;
    this->EmailTextBox = NULL;
    this->BackButton = NULL;
    this->SubmitButton = NULL;
    this->CancelButton = NULL;
}

void UModioCommonReportEmailView::SetValidationTextVisibility_Implementation(ESlateVisibility EVisbility) {
}

void UModioCommonReportEmailView::OnEditableTextBoxTextChanged_Implementation(const FText& InText) {
}


