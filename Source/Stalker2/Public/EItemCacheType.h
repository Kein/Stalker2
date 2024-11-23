#pragma once
#include "CoreMinimal.h"
#include "EItemCacheType.generated.h"

UENUM(BlueprintType)
enum class EItemCacheType : uint8 {
    Stash,
    PackOfItems,
    Destructible,
};

