#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeType.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeType : uint8 {
    None,
    Constant,
    Vital,
    FloatProvider,
    GetCount,
};

