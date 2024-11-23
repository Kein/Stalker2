#pragma once
#include "CoreMinimal.h"
#include "EModifiedCharacterParam.generated.h"

UENUM(BlueprintType)
enum class EModifiedCharacterParam : uint8 {
    HP,
    HPPercent,
    SP,
    Bleeding,
    HungerPoints,
    Sleepiness,
    Radiation,
    Money,
    RewardMainLineMoney,
    RewardSideLineMoney,
    Rank,
    InventoryWeight,
    IgnoreDamageType,
    Zombie,
};

