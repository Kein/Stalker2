#pragma once
#include "CoreMinimal.h"
#include "EModioObjectVisibilityFlags.generated.h"

UENUM(BlueprintType)
enum class EModioObjectVisibilityFlags : uint8 {
    Hidden,
    Public,
};

