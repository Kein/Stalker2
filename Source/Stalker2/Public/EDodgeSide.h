#pragma once
#include "CoreMinimal.h"
#include "EDodgeSide.generated.h"

UENUM(BlueprintType)
enum class EDodgeSide : uint8 {
    None,
    Left,
    Right,
    GetCount,
};

