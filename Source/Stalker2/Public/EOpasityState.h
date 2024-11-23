#pragma once
#include "CoreMinimal.h"
#include "EOpasityState.generated.h"

UENUM(BlueprintType)
enum class EOpasityState : uint8 {
    None,
    FullFast,
    FullToHalf,
    NoneToHalf,
    FullToNone,
};

