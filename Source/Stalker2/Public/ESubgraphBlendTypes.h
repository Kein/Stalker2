#pragma once
#include "CoreMinimal.h"
#include "ESubgraphBlendTypes.generated.h"

UENUM(BlueprintType)
enum class ESubgraphBlendTypes : uint8 {
    None,
    WeaponHide,
    WeaponShow,
    DetectorHide,
    DetectorShow,
    OneHandedConsumableShow,
    OneHandedConsumableHide,
    TwoHandedConsumableHide,
    TwoHandedConsumableShow,
};

