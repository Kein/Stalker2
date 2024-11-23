#pragma once
#include "CoreMinimal.h"
#include "EEffectDisplayType.generated.h"

UENUM(BlueprintType)
enum class EEffectDisplayType : uint8 {
    None,
    Value,
    ValueAndTime,
    EffectLevel,
    GetCount,
};

