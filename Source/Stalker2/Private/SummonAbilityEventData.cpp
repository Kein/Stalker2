#include "SummonAbilityEventData.h"

USummonAbilityEventData::USummonAbilityEventData() {
}

bool USummonAbilityEventData::ShouldSpawnEffects() const {
    return false;
}

TArray<FVector> USummonAbilityEventData::GetSummonLocations() const {
    return TArray<FVector>();
}


