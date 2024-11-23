#include "ModioCommonModDetailsView.h"
#include "Templates/SubclassOf.h"

UModioCommonModDetailsView::UModioCommonModDetailsView() {
    this->bAutoBindInputAction = false;
    this->ModioStyle = NULL;
    this->ModNameTextBlock = NULL;
    this->SubscribeButton = NULL;
    this->CancelButton = NULL;
    this->RateUpButton = NULL;
    this->RateDownButton = NULL;
    this->ReportButton = NULL;
    this->CollectionButton = NULL;
    this->ModSummaryTextBlock = NULL;
    this->ModFullDescriptionLabelTextBlock = NULL;
    this->ModFullDescriptionTextBlock = NULL;
    this->OperationContainer = NULL;
    this->ProgressBarContainer = NULL;
    this->StatusContainer = NULL;
    this->InstalledCheckBox = NULL;
    this->EnabledCheckBox = NULL;
    this->OperationProgressLabelTextBlock = NULL;
    this->OperationProgressTextBlock = NULL;
    this->OperationProgressBar = NULL;
    this->FileSizeLabelTextBlock = NULL;
    this->FileSizeTextBlock = NULL;
    this->LastUpdatedLabelTextBlock = NULL;
    this->LastUpdatedTextBlock = NULL;
    this->ReleaseDateLabelTextBlock = NULL;
    this->ReleaseDateTextBlock = NULL;
    this->SubscribersLabelTextBlock = NULL;
    this->SubscribersTextBlock = NULL;
    this->CreatedByLabelTextBlock = NULL;
    this->CreatedByTextBlock = NULL;
    this->TagsLabelTextBlock = NULL;
    this->TagsWidget = NULL;
    this->ModGalleryView = NULL;
    this->ModioCommonDescriptionScrollBox = NULL;
    this->SpeedDetailsTextBlock = NULL;
    this->ModDetailsLoader = NULL;
    this->ErrorWithRetryWidget = NULL;
}

void UModioCommonModDetailsView::UpdateSpeed_Implementation(FModioUnsigned64 DeltaBytes, double DeltaTime) {
}

void UModioCommonModDetailsView::UpdateOperationProgressPercent_Implementation(float InPercent) {
}

void UModioCommonModDetailsView::UpdateOperationProgressBytes_Implementation(FModioUnsigned64 Current, FModioUnsigned64 Total) {
}

void UModioCommonModDetailsView::UpdateInputActions_Implementation() {
}

void UModioCommonModDetailsView::ShowStatus_Implementation() {
}

void UModioCommonModDetailsView::ShowProgress_Implementation() {
}

void UModioCommonModDetailsView::SetStyle(TSubclassOf<UModioCommonModDetailsViewStyle> InStyle) {
}

void UModioCommonModDetailsView::OnRatingSubmissionComplete_Implementation(FModioErrorCode ErrorCode, EModioRating SubmittedRating) {
}

void UModioCommonModDetailsView::HideProgress_Implementation() {
}

void UModioCommonModDetailsView::HandleSwitchEnabledClicked_Implementation() {
}

void UModioCommonModDetailsView::HandleSubscribeClicked_Implementation() {
}

void UModioCommonModDetailsView::HandleReportClicked_Implementation() {
}

void UModioCommonModDetailsView::HandleRateUpClicked_Implementation() {
}

void UModioCommonModDetailsView::HandleRateDownClicked_Implementation() {
}

void UModioCommonModDetailsView::HandleCollectionClicked_Implementation() {
}

void UModioCommonModDetailsView::HandleCancelClicked_Implementation() {
}

void UModioCommonModDetailsView::ActivateTopButtonsInputBindings_Implementation() {
}

void UModioCommonModDetailsView::ActivateTagsInputBindings_Implementation() {
}

void UModioCommonModDetailsView::ActivateBottomButtonsInputBindings_Implementation() {
}


