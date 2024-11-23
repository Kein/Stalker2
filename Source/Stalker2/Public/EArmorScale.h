#pragma once
#include "CoreMinimal.h"
#include "EArmorScale.generated.h"

UENUM(BlueprintType)
enum class EArmorScale : uint8 {
    LightArmor,
    MediumArmor,
    HeavyArmor,
    SuperHeavyArmor,
    GetCount,
};

