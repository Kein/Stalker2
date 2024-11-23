#include "HintBase.h"

UHintBase::UHintBase() {
    //this->InteractionType = EInteractionType::SingleClick;
    this->FirstPlanStyle = TEXT("Hint");
    this->BackgroundStyle = TEXT("HintBackground");
    this->bEnableStyleManager = true;
    this->bCheckInputKey = false;
    this->bGamepadKey = false;
    this->Background = NULL;
}

void UHintBase::UpdateHintWidget() {
}

void UHintBase::SetText(const FText& InText) {
}

void UHintBase::SetStylePrefix(const FString& InStylePrefix) {
}


void UHintBase::HoverChangeHintTextColor(const bool bShow, const FString& InStylePrefix) {
}



