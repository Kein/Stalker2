#pragma once
#include "CoreMinimal.h"
#include "EMusicState.generated.h"

UENUM(BlueprintType)
enum class EMusicState : uint8 {
    Region,
    Location,
    NoMusic,
    Combat,
    CombatEnd,
};

