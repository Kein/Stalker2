#pragma once
#include "CoreMinimal.h"
#include "EEffectSource.generated.h"

UENUM(BlueprintType)
enum class EEffectSource : uint8 {
    None,
    Obj,
    Armor,
    Weapon,
    Artifact,
    Consumable,
    Other,
    Debug,
    GetCount,
};

