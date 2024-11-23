#include "ComplexAttachAnimations.h"

FComplexAttachAnimations::FComplexAttachAnimations() {
    this->WeaponIdleType = EWeaponIdleType::Default;
    this->AttachAttachingAnimation = NULL;
    this->AttachDetachingAnimation = NULL;
    this->CharacterAttachModeIn = NULL;
    this->WeaponAttachModeIn = NULL;
    this->AttachAttachModeIn = NULL;
    this->CharacterAttachModeOut = NULL;
    this->WeaponAttachModeOut = NULL;
    this->AttachAttachModeOut = NULL;
    this->bIsBindedToWeaponBehaviour = false;
    this->CharacterAttachShoot = NULL;
    this->WeaponAttachShoot = NULL;
    this->AttachAttachShoot = NULL;
    this->CharacterAttachReload = NULL;
    this->WeaponAttachReload = NULL;
    this->AttachAttachReload = NULL;
    this->CharacterAttachReloadTactical = NULL;
    this->WeaponAttachReloadTactical = NULL;
    this->AttachAttachReloadTactical = NULL;
    this->AttachAttachShootEnd = NULL;
    this->WeaponAnimCollection = NULL;
}

