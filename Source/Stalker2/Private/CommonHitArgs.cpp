#include "CommonHitArgs.h"

FCommonHitArgs::FCommonHitArgs() {
    this->Damage = 0.00f;
    this->ImpulseStr = 0.00f;
    this->ArmorDamage = 0.00f;
    this->ArmorPiercing = 0.00f;
    this->Bleeding = 0.00f;
    this->BleedingChanceIncrement = 0.00f;
    this->DamageType = EDamageType::None;
    this->bDirectDamageSkipCalculations = false;
    this->bShouldIgnoreArmor = false;
    this->DamageSource = EDamageSource::None;
    this->bFlownThroughObject = false;
    this->LaunchTimestamp = 0.00f;
    this->bIsFractionDamage = false;
}

