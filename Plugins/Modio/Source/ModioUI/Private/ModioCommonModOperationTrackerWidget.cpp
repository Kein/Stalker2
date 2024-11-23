#include "ModioCommonModOperationTrackerWidget.h"
#include "Components/SlateWrapperTypes.h"

UModioCommonModOperationTrackerWidget::UModioCommonModOperationTrackerWidget() {
    this->Visibility = ESlateVisibility::HitTestInvisible;
}

void UModioCommonModOperationTrackerWidget::SetTrackingModID(FModioModID ModId) {
}

void UModioCommonModOperationTrackerWidget::SetTrackAnyMods(bool bInTrackAnyMods) {
}

int64 UModioCommonModOperationTrackerWidget::GetPreviewTotal() const {
    return 0;
}

int64 UModioCommonModOperationTrackerWidget::GetPreviewCurrent() const {
    return 0;
}


