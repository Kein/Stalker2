#pragma once
#include "CoreMinimal.h"
#include "EModioModChangeType.generated.h"

UENUM(BlueprintType)
enum class EModioModChangeType : uint8 {
    Added,
    Removed,
    Updated,
};

