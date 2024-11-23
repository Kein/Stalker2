#include "ItemSelectorView.h"

UItemSelectorView::UItemSelectorView() {
    this->bIsActive = true;
    this->AmmoIcon = NULL;
    this->AmmoIconSwipe = NULL;
    this->FireTypeIcon = NULL;
    this->GrenadeIcon = NULL;
    this->GrenadeIconSwipe = NULL;
    this->NavigateArrowLeftGrenade = NULL;
    this->NavigateArrowRightGrenade = NULL;
    this->NavigateArrowLeftAmmo = NULL;
    this->NavigateArrowRightAmmo = NULL;
    this->TextAmmoType = NULL;
    this->MidleSwitcher = NULL;
    this->TextShutType = NULL;
    this->ModeHintSwitcher = NULL;
    this->AmmoHintSwitcher = NULL;
    this->GrenadeHintSwitcher = NULL;
    this->HintUseGuitar = NULL;
    this->ItemSelectorChangeGrenade = NULL;
    this->ItemSelectorChangeAmmo = NULL;
    this->ItemSelectorChangeFireMode = NULL;
    this->ItemSelectorRestoreState = NULL;
    this->FastChangeSlotTime = 0.10f;
    this->FastChangeUpdateTime = 0.05f;
    this->InputDelayTime = 0.20f;
    this->ItemSelectorChangeAmmoSpeed = 1.00f;
    this->ItemSelectorChangeFireModeSpeed = 1.00f;
    this->ItemSelectorChangeGrenadeSpeed = 1.00f;
    this->DefoultSelectSlotType = EMainHandEquipmentType::PrimaryWeapon;
    this->bShouldIgnoreEmptySlot = true;
    this->SideSlotDetector = NULL;
    this->SideSlotFlashlight = NULL;
    this->SideSlotUnarmed = NULL;
    this->SideSlotLauncher = NULL;
    this->SelectedSlot = NULL;
    this->HoveredSlot = NULL;
    this->SelectedEquipSlot = NULL;
}

void UItemSelectorView::UIItemSelectorUnarm() {
}

void UItemSelectorView::UIItemSelectorGrenadeLauncher() {
}

void UItemSelectorView::UIItemSelectorFlashlight() {
}

void UItemSelectorView::UIItemSelectorDetector() {
}

void UItemSelectorView::ToggleAttachMode() {
}


void UItemSelectorView::ChangeFireType() {
}

void UItemSelectorView::ChangeAmmoType() {
}


