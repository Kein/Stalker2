#pragma once
#include "CoreMinimal.h"
#include "ENestingIndex.generated.h"

UENUM(BlueprintType)
enum class ENestingIndex : uint8 {
    Settings,
    PCMapping,
    GamepadMapping,
};

