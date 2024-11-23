#pragma once
#include "CoreMinimal.h"
#include "EWaterImmersionLevel.generated.h"

UENUM(BlueprintType)
enum class EWaterImmersionLevel : uint8 {
    None,
    Low,
    Medium,
    High,
    Deadly,
    GetCount,
};

