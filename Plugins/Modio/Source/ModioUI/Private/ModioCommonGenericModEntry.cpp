#include "ModioCommonGenericModEntry.h"
#include "Templates/SubclassOf.h"

UModioCommonGenericModEntry::UModioCommonGenericModEntry() {
    this->ModioStyle = NULL;
    this->Background = NULL;
    this->ForegroundContainer = NULL;
    this->ModImage = NULL;
    this->ModNameTextBlock = NULL;
    this->OperationLabelTextBlock = NULL;
    this->OperationDetailsTextBlock = NULL;
    this->SpeedLabelTextBlock = NULL;
    this->SpeedDetailsTextBlock = NULL;
    this->DownloadsLabelTextBlock = NULL;
    this->DownloadsDetailsTextBlock = NULL;
    this->SizeLabelTextBlock = NULL;
    this->SizeDetailsTextBlock = NULL;
    this->RatingPercentageTextBlock = NULL;
    this->RatingPositiveTextBlock = NULL;
    this->RatingNegativeTextBlock = NULL;
    this->SubscribeButton = NULL;
    this->CancelButton = NULL;
    this->EnableButton = NULL;
    this->DisableButton = NULL;
    this->OpenModDetailsButton = NULL;
    this->ForceUninstallButton = NULL;
    this->PercentProgressTextBlock = NULL;
    this->PercentProgressBar = NULL;
    this->MinDecimalsFileSize = 0;
    this->MaxDecimalsFileSize = 1;
    this->MinDecimalsProgress = 1;
    this->MaxDecimalsProgress = 1;
    this->MinDecimalsSpeed = 1;
    this->MaxDecimalsSpeed = 1;
}

void UModioCommonGenericModEntry::UpdateSpeed_Implementation(FModioUnsigned64 DeltaBytes, double DeltaTime) {
}

void UModioCommonGenericModEntry::UpdateOperationProgressPercent_Implementation(float InPercent) {
}

void UModioCommonGenericModEntry::UpdateOperationProgressBytes_Implementation(FModioUnsigned64 Current, FModioUnsigned64 Total) {
}

void UModioCommonGenericModEntry::SwitchSpeedVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonGenericModEntry::SwitchForceUninstallButtonVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonGenericModEntry::SwitchEnableButtonVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonGenericModEntry::SwitchDisableButtonVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonGenericModEntry::SwitchCancelButtonVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonGenericModEntry::SetStyle(TSubclassOf<UModioCommonGenericModEntryStyle> InStyle) {
}

void UModioCommonGenericModEntry::OnRatingSubmissionComplete_Implementation(FModioErrorCode ErrorCode, EModioRating Rating) {
}

void UModioCommonGenericModEntry::HandleSwitchEnabledClicked_Implementation() {
}

void UModioCommonGenericModEntry::HandleSubscribeClicked_Implementation() {
}

void UModioCommonGenericModEntry::HandleOpenModDetailsClicked_Implementation() {
}

void UModioCommonGenericModEntry::HandleForceUninstallClicked_Implementation() {
}

void UModioCommonGenericModEntry::HandleCancelClicked_Implementation() {
}


