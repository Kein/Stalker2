#include "AnimHandItemData.h"

FAnimHandItemData::FAnimHandItemData() {
    this->bHasItemInHands = false;
    this->bHasEmptyHands = false;
    this->ItemSkeletal = NULL;
    this->ItemInteractable = NULL;
    this->bIsUsesLeftHand = false;
    this->bIsUsesRightHand = false;
}

