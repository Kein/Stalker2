#pragma once
#include "CoreMinimal.h"
#include "EEvadeActionType.generated.h"

UENUM(BlueprintType)
enum class EEvadeActionType : uint8 {
    None,
    Back = 2,
    Left = 4,
    Right = 8,
    Side = 12,
};

