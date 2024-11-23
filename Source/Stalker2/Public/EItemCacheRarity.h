#pragma once
#include "CoreMinimal.h"
#include "EItemCacheRarity.generated.h"

UENUM(BlueprintType)
enum class EItemCacheRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
};

