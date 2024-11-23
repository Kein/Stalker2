#pragma once
#include "CoreMinimal.h"
#include "ECodelockKeyDirectionType.generated.h"

UENUM(BlueprintType)
enum class ECodelockKeyDirectionType : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
};

