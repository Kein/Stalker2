#include "ModioCommonReportMessageView.h"

UModioCommonReportMessageView::UModioCommonReportMessageView() {
    this->TitleTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->CharactersTextBlock = NULL;
    this->ValidationTextBlock = NULL;
    this->ErrorMessageTextBlock = NULL;
    this->MessageTextBox = NULL;
    this->BackButton = NULL;
    this->SubmitButton = NULL;
    this->CancelButton = NULL;
}

void UModioCommonReportMessageView::OnMultiLineTextBoxTextChanged(const FText& Text) {
}


