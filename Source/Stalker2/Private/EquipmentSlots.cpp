#include "EquipmentSlots.h"

UEquipmentSlots::UEquipmentSlots() {
    this->CanvasPanel = NULL;
    this->MainHand = NULL;
    this->SecondHand = NULL;
    this->Head = NULL;
    this->Detector = NULL;
    this->Artifact1 = NULL;
    this->Artifact2 = NULL;
    this->Artifact3 = NULL;
    this->Artifact4 = NULL;
    this->Artifact5 = NULL;
    this->Pistol = NULL;
    this->Torso = NULL;
    this->NavBorder = NULL;
    this->HeaderText = NULL;
    this->InventoryNew = NULL;
    this->CurrMovingWidget = NULL;
    this->CurrPickedSlot = NULL;
    this->NavBorderSlot = NULL;
}

void UEquipmentSlots::OnItemMouseLeave(UInteractableItemSlotBaseWidget* ItemWidget) {
}

void UEquipmentSlots::OnItemMouseEnter(UInteractableItemSlotBaseWidget* ItemWidget) {
}


