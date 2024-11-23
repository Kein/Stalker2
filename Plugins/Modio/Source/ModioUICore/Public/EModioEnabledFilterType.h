#pragma once
#include "CoreMinimal.h"
#include "EModioEnabledFilterType.generated.h"

UENUM(BlueprintType)
enum class EModioEnabledFilterType : uint8 {
    None,
    Enabled,
    Disabled,
};

