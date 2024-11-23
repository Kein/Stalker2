#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeGroupType.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeGroupType : uint8 {
    None,
    Priority,
    MaxCount,
    GetCount,
};

