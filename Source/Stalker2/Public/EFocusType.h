#pragma once
#include "CoreMinimal.h"
#include "EFocusType.generated.h"

UENUM(BlueprintType)
enum class EFocusType : uint8 {
    NoFocus,
    Location,
    Direction,
};

