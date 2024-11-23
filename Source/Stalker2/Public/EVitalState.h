#pragma once
#include "CoreMinimal.h"
#include "EVitalState.generated.h"

UENUM(BlueprintType)
enum class EVitalState : uint8 {
    Alive,
    Dead,
    Zombie,
};

