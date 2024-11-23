#include "AnimPlayerCollectionsData.h"

FAnimPlayerCollectionsData::FAnimPlayerCollectionsData() {
    this->DefaultAnimCollection = NULL;
    this->DragDeadBodyAnimCollection = NULL;
    this->AnimCollection = NULL;
    this->FirearmAnimCollection = NULL;
    this->ThrowableAnimCollection = NULL;
    this->KnifeAnimCollection = NULL;
    this->ItemAnimCollection = NULL;
    this->ItemInteractableAnimCollection = NULL;
    this->AttachAnimCollection = NULL;
    this->DetectorAnimCollection = NULL;
    this->bWeaponSubgraphToggle = false;
    this->WeaponSubgraphBlend = 0.00f;
    this->bAdditionalSubgraphToggle = false;
    this->AdditionalSubgraphBlend = 0.00f;
}

