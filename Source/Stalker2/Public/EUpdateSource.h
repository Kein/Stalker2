#pragma once
#include "CoreMinimal.h"
#include "EUpdateSource.generated.h"

UENUM(BlueprintType)
enum class EUpdateSource : uint8 {
    Reload,
    Shift,
    Upgrade,
    Spawn,
};

