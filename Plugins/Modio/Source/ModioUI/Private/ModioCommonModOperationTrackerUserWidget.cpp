#include "ModioCommonModOperationTrackerUserWidget.h"
#include "Templates/SubclassOf.h"

UModioCommonModOperationTrackerUserWidget::UModioCommonModOperationTrackerUserWidget() {
    this->ModioStyle = NULL;
    this->Tracker = NULL;
    this->IconImage = NULL;
    this->ModTitleTextBlock = NULL;
    this->OverallOperationPercentageLabelTextBlock = NULL;
    this->OverallOperationPercentageTextBlock = NULL;
    this->QueuedOperationNumberLabelTextBlock = NULL;
    this->QueuedOperationNumberTextBlock = NULL;
    this->SpeedLabelTextBlock = NULL;
    this->SpeedTextBlock = NULL;
    this->ModOperationProgressBar = NULL;
    this->MinDecimalsProgress = 0;
    this->MaxDecimalsProgress = 0;
    this->MinDecimalsSpeed = 0;
    this->MaxDecimalsSpeed = 0;
    this->bTrackAnyMods = false;
}

void UModioCommonModOperationTrackerUserWidget::UpdateQueuedOperationNumber_Implementation() {
}

void UModioCommonModOperationTrackerUserWidget::SetTrackingModID(FModioModID ModId) {
}

void UModioCommonModOperationTrackerUserWidget::SetStyle(TSubclassOf<UModioCommonModOperationTrackerUserWidgetStyle> InStyle) {
}

void UModioCommonModOperationTrackerUserWidget::OnModOperationTrackerSpeedUpdated_Implementation(FModioUnsigned64 DeltaBytes, double DeltaTime) {
}

void UModioCommonModOperationTrackerUserWidget::OnModOperationTrackerProgressUpdated_Implementation(FModioUnsigned64 Current, FModioUnsigned64 Total) {
}

int32 UModioCommonModOperationTrackerUserWidget::GetNumOfQueuedMods() const {
    return 0;
}

bool UModioCommonModOperationTrackerUserWidget::GetCurrentDownloadingMod(FModioModCollectionEntry& OutDownloadingMod) {
    return false;
}


