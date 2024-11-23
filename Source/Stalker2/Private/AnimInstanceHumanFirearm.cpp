#include "AnimInstanceHumanFirearm.h"

UAnimInstanceHumanFirearm::UAnimInstanceHumanFirearm() {
    this->WeaponAnimCollection = NULL;
    this->ZombieWeaponAnimCollection = NULL;
    this->bIsZombie = false;
    this->bUsingSmartCoverAnimPose = false;
    this->SmartCoverType = ESmartCoverType::NoCover;
}


