#include "ModioCommonStorageSpaceTrackerUserWidget.h"
#include "Templates/SubclassOf.h"

UModioCommonStorageSpaceTrackerUserWidget::UModioCommonStorageSpaceTrackerUserWidget() {
    this->ModioStyle = NULL;
    this->Tracker = NULL;
    this->IconImage = NULL;
    this->UsedSpaceLabelTextBlock = NULL;
    this->UsedSpaceTextBlock = NULL;
    this->FreeSpaceLabelTextBlock = NULL;
    this->FreeSpaceTextBlock = NULL;
    this->TotalSpaceLabelTextBlock = NULL;
    this->TotalSpaceTextBlock = NULL;
    this->StorageSpaceProgressBar = NULL;
    this->MinDecimals = 0;
    this->MaxDecimals = 0;
}

void UModioCommonStorageSpaceTrackerUserWidget::SetStyle(TSubclassOf<UModioCommonStorageSpaceTrackerUserWidgetStyle> InStyle) {
}

void UModioCommonStorageSpaceTrackerUserWidget::OnStorageSpaceTrackerUpdated_Implementation(FModioUnsigned64 UsedSpace, FModioUnsigned64 FreeSpace, FModioUnsigned64 TotalSpace) {
}


