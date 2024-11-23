#include "QuickPanel.h"

UQuickPanel::UQuickPanel() {
    this->bFillQuickSlots = false;
    this->SlotADefaultEquipment = ESortGroup::Up;
    this->SlotBDefaultEquipment = ESortGroup::Up;
    this->SlotCDefaultEquipment = ESortGroup::Up;
    this->SlotDDefaultEquipment = ESortGroup::Up;
    this->bAnimate = false;
    this->UpdateShouldUseAnimationTime = 0.50f;
    this->AnimPanelHide = NULL;
    this->AnimPanelShow = NULL;
    this->NavBorder = NULL;
    this->NavBorderSlot = NULL;
    this->LeftHint = NULL;
    this->RightHint = NULL;
    this->QuickSlot1 = NULL;
    this->QuickSlot3 = NULL;
    this->QuickSlot2 = NULL;
    this->QuickSlot4 = NULL;
    this->HoldProgressLeft = NULL;
    this->HoldProgressRight = NULL;
    this->HintLeft = NULL;
    this->HintRight = NULL;
    this->HoldInactiveOpacity = 0.30f;
    this->HoldActiveOpacity = 1.00f;
    this->HidePanelDelay = 1.50f;
    this->QuickSlotsFadeIn = 0.70f;
    this->QuickSlotsFadeOut = 0.70f;
    this->bInventoryQuickPanel = false;
    this->CurrSelectedSlot = NULL;
    this->InventoryNew = NULL;
}

void UQuickPanel::UpdateShouldUseAnimation() const {
}

bool UQuickPanel::PlayShouldUseAnimationIfRequired(ESortGroup InSortGroup) const {
    return false;
}

void UQuickPanel::OnQuickSlotMouseLeave(UQuickSlot* HoveredWidget) {
}

void UQuickPanel::OnQuickSlotMouseEnter(UQuickSlot* ItemWidget) {
}


