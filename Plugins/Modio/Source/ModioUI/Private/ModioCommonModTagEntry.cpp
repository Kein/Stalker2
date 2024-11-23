#include "ModioCommonModTagEntry.h"

UModioCommonModTagEntry::UModioCommonModTagEntry() {
    this->TagButton = NULL;
    this->TagCheckbox = NULL;
    this->bAllowMultipleSelection = false;
}

void UModioCommonModTagEntry::SetTag_Implementation(const FString& InTag) {
}

void UModioCommonModTagEntry::SetSelected_Implementation(bool bIsSelected) {
}

void UModioCommonModTagEntry::SetAllowMultipleSelection_Implementation(bool bInAllowMultipleSelection) {
}

FString UModioCommonModTagEntry::GetTag() const {
    return TEXT("");
}

bool UModioCommonModTagEntry::GetSelected() const {
    return false;
}

bool UModioCommonModTagEntry::GetAllowMultipleSelection() const {
    return false;
}


