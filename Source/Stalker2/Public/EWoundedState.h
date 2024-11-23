#pragma once
#include "CoreMinimal.h"
#include "EWoundedState.generated.h"

UENUM(BlueprintType)
enum class EWoundedState : uint8 {
    None,
    Falling,
    Fallen,
    Reviving,
};

