#include "ModioCommonExpandableArea.h"
#include "Templates/SubclassOf.h"

UModioCommonExpandableArea::UModioCommonExpandableArea() {
    this->ModioStyle = NULL;
    this->CachedAppliedModioStyle = NULL;
}

void UModioCommonExpandableArea::SetStyle(TSubclassOf<UModioCommonExpandableAreaStyle> InStyle) {
}

void UModioCommonExpandableArea::HandleOnFocusReceived() {
}

void UModioCommonExpandableArea::HandleOnFocusLost() {
}


