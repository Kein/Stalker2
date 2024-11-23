#include "ModioCommonEmailAuthCodeView.h"

UModioCommonEmailAuthCodeView::UModioCommonEmailAuthCodeView() {
    this->TitleTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->ValidationTextBlock = NULL;
    this->BackButton = NULL;
    this->SubmitButton = NULL;
    this->CancelButton = NULL;
    this->CodeInputTextBox = NULL;
    this->CustomCodeInputTextBox = NULL;
}

void UModioCommonEmailAuthCodeView::SetValidationTextVisibility_Implementation(ESlateVisibility Visbility) {
}

void UModioCommonEmailAuthCodeView::SetIsBusy_Implementation(bool bBusy) {
}

bool UModioCommonEmailAuthCodeView::IsCodeValid_Implementation(const FString& Code) {
    return false;
}

void UModioCommonEmailAuthCodeView::HandleOnSubmitClicked_Implementation() {}

// void UModioCommonEmailAuthCodeView::HandleOnCustomSubmitClicked_Implementation(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {}

FString UModioCommonEmailAuthCodeView::GetInputText_Implementation() const {
    return TEXT("");
}


