#include "AbilityEventData.h"

UAbilityEventData::UAbilityEventData() {
}

FName UAbilityEventData::GetActivationTag() const {
    return NAME_None;
}

EAbility UAbilityEventData::GetAbilityType() const {
    return EAbility::None;
}


