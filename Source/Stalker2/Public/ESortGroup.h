#pragma once
#include "CoreMinimal.h"
#include "ESortGroup.generated.h"

UENUM()
enum class ESortGroup : int8 {
    None = -1,
    Up = 0,
    Down,
    Left,
    Right,
    HP,
    Bleeding,
    Radiations,
    Stamina,
    Buff,
    Hunger,
    GetCount,
};

