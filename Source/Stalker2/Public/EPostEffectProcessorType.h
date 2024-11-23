#pragma once
#include "CoreMinimal.h"
#include "EPostEffectProcessorType.generated.h"

UENUM(BlueprintType)
enum class EPostEffectProcessorType : uint8 {
    None,
    Constant,
    Lerp,
    FloatProvider,
    Raw,
    Cyclical,
    GetCount,
};

