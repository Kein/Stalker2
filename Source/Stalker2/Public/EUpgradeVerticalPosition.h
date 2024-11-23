#pragma once
#include "CoreMinimal.h"
#include "EUpgradeVerticalPosition.generated.h"

UENUM(BlueprintType)
enum class EUpgradeVerticalPosition : uint8 {
    None,
    Top,
    Down,
    GetCount,
};

