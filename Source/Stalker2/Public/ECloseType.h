#pragma once
#include "CoreMinimal.h"
#include "ECloseType.generated.h"

UENUM(BlueprintType)
enum class ECloseType : uint8 {
    OnlyPriority,
    IgnoreClose,
    PriorityAndIgnoreCloseByName,
};

