#pragma once
#include "CoreMinimal.h"
#include "EItemCacheVisibilityType.generated.h"

UENUM(BlueprintType)
enum class EItemCacheVisibilityType : uint8 {
    ClueRequired,
    AlwaysAvailable,
};

