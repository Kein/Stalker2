#pragma once
#include "CoreMinimal.h"
#include "EWeaponIdleType.generated.h"

UENUM(BlueprintType)
enum class EWeaponIdleType : uint8 {
    Default,
    GrenLauncher,
    GrenLauncherAction,
    BuckLauncher,
    BuckLauncherAction,
    Grip,
};

