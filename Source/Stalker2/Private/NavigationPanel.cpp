#include "NavigationPanel.h"

UNavigationPanel::UNavigationPanel() {
    this->SlotContainer = NULL;
    this->bShouldEnableClick = true;
    this->bShouldSelectDefaultSlot = true;
    this->DefaultSlotIndex = 0;
    this->bShouldStopOthersInputs = true;
    this->bShouldBindClick = false;
    this->bIgnoreInputOnPause = false;
    this->bShouldLoopMove = true;
    this->PDASectionSwitch = 0.50f;
    this->PrevPageHint = NULL;
    this->NextPageHint = NULL;
}

void UNavigationPanel::TransitToNextSlot() {
}

void UNavigationPanel::TransitSelectSlotRelease() {
}

void UNavigationPanel::TransitSelectSlotForward() {
}

void UNavigationPanel::TransitSelectSlotBack() {
}

void UNavigationPanel::MoveSelectSlotToPreviousSlot() {
}

void UNavigationPanel::MoveSelectSlotToNextSlot() {
}

void UNavigationPanel::InitClickTransition(FName ButtonId) {
}

void UNavigationPanel::ClickMenuButton(const FName InButtonId) {
}


