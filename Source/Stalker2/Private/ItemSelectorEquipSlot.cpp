#include "ItemSelectorEquipSlot.h"

UItemSelectorEquipSlot::UItemSelectorEquipSlot() {
    this->SlotHighlight = NULL;
    this->SlotHighlightWhite = NULL;
    this->SlotSizeBox = NULL;
    this->HintSwitcher = NULL;
    this->DpadNavigation = EDpadNavigation::Left;
    this->bIsAvailable = true;
    this->IndexEquipSlot = 0;
    this->FlipHintLetter = false;
}


