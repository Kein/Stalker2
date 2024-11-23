#pragma once
#include "CoreMinimal.h"
#include "EAmmoType.generated.h"

UENUM(BlueprintType)
enum class EAmmoType : uint8 {
    None,
    Default,
    ArmorPiercing,
    Supersonic,
    Expanding,
    Incendiary,
    GetCount,
};

