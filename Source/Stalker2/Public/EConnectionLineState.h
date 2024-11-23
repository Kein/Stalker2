#pragma once
#include "CoreMinimal.h"
#include "EConnectionLineState.generated.h"

UENUM(BlueprintType)
enum class EConnectionLineState : uint8 {
    None,
    Top,
    Middle,
    Down,
};

