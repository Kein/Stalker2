#include "ModioCommonModEntryBase.h"

UModioCommonModEntryBase::UModioCommonModEntryBase() {
    this->bAutoActivate = true;
    this->bSupportsActivationFocus = false;
    this->bAutoBindInputAction = false;
    this->bAutoFocusOnActivation = false;
    this->ModOperationTrackerUserWidget = NULL;
    this->ModOperationTrackerWidget = NULL;
}


void UModioCommonModEntryBase::UpdateInputActions_Implementation() {
}

void UModioCommonModEntryBase::SelectModListItem_Implementation() {
}

bool UModioCommonModEntryBase::IsUserAuthenticated() const {
    return false;
}

bool UModioCommonModEntryBase::IsModListItemValid_Implementation() const {
    return false;
}

bool UModioCommonModEntryBase::IsModListItemSelected_Implementation() const {
    return false;
}

void UModioCommonModEntryBase::DeselectModListItem_Implementation() {
}


