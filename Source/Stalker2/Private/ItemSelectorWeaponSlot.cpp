#include "ItemSelectorWeaponSlot.h"

UItemSelectorWeaponSlot::UItemSelectorWeaponSlot() {
    this->SlotRadiusSizeBox = NULL;
    this->RotationBox = NULL;
    this->BackgroundImage = NULL;
    this->Particles = NULL;
    this->GrenadeText = NULL;
    this->AmmoText = NULL;
    this->AmmoTextMax = NULL;
    this->UnderbarrelAmmoText = NULL;
    this->UnderbarrelAmmoTextMax = NULL;
    this->AmmoSlash = NULL;
    this->UnderbarrelAmmoSlash = NULL;
    this->IconContainer = NULL;
    this->AmmoContainer = NULL;
    this->IndexSlot = 0;
    this->SlotAngle = 0.00f;
    this->Radius = 0.00f;
    this->bSlotBlocked = false;
    this->LayerSlotType = ELayerSlotType::Defoult;
    this->FadeVCoordinate = 0.28f;
    this->HorizontalSpeed = -0.01f;
    this->SoftFadeDistance = 0.10f;
    this->UTiling = 0.51f;
    this->VerticalSpeed = 0.02f;
    this->VTiling = 0.50f;
    this->AttachesOverlay = NULL;
    this->AttachImageWidgetClass = NULL;
}

bool UItemSelectorWeaponSlot::IsWeaponSlot() {
    return false;
}

bool UItemSelectorWeaponSlot::IsGrenadeSlot() {
    return false;
}

bool UItemSelectorWeaponSlot::IsAlternativeSlot() {
    return false;
}


void UItemSelectorWeaponSlot::ConstructUpdateSlotScale() {
}


