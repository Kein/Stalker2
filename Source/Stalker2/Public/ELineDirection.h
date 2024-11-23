#pragma once
#include "CoreMinimal.h"
#include "ELineDirection.generated.h"

UENUM(BlueprintType)
enum class ELineDirection : uint8 {
    None,
    Left,
    Right,
};

