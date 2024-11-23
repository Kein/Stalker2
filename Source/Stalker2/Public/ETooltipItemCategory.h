#pragma once
#include "CoreMinimal.h"
#include "ETooltipItemCategory.generated.h"

UENUM(BlueprintType)
enum class ETooltipItemCategory : uint8 {
    Armor,
    Weapon,
    Consumable,
    Artifact,
    GetCount,
};

