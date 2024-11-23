#include "ModioCommonAuthView.h"

UModioCommonAuthView::UModioCommonAuthView() {
    this->AuthSwitcher = NULL;
    this->TermsOfUseView = NULL;
    this->EmailAuthView = NULL;
    this->EmailAuthLoadingView = NULL;
    this->EmailAuthCodeView = NULL;
    this->bAuthCancelled = false;
}

void UModioCommonAuthView::SetShowTermsOfView_Implementation(bool bShow) {
}

void UModioCommonAuthView::OnTermsOfUseViewSubmitClicked_Implementation() {
}

void UModioCommonAuthView::OnTermsOfUseViewLinkClicked_Implementation(const FString& URL) {
}

void UModioCommonAuthView::OnTermsOfUseViewCancelClicked_Implementation() {
}

void UModioCommonAuthView::OnEmailAuthViewSubmitClicked_Implementation(const FString& EmailAddress) {
}

void UModioCommonAuthView::OnEmailAuthViewCancelClicked_Implementation() {
}

void UModioCommonAuthView::OnEmailAuthViewBackClicked_Implementation() {
}

void UModioCommonAuthView::OnEmailAuthLoadingViewCancelClicked_Implementation() {
}

void UModioCommonAuthView::OnEmailAuthCodeViewSubmitClicked_Implementation(const FString& AuthCode) {
}

void UModioCommonAuthView::OnEmailAuthCodeViewCancelClicked_Implementation() {
}

void UModioCommonAuthView::OnEmailAuthCodeViewBackClicked_Implementation() {
}

void UModioCommonAuthView::HandleEmailAuthenticated_Implementation(FModioErrorCode ErrorCode) {
}

void UModioCommonAuthView::HandleEmailAuthCodeSent_Implementation(FModioErrorCode ErrorCode) {
}


