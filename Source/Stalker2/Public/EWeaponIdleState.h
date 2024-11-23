#pragma once
#include "CoreMinimal.h"
#include "EWeaponIdleState.generated.h"

UENUM(BlueprintType)
enum class EWeaponIdleState : uint8 {
    ShutterState,
    JamState,
    UnderbarrelState,
    AimState,
    CustomAdditionalState,
};

