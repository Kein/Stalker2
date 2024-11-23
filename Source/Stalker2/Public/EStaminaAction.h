#pragma once
#include "CoreMinimal.h"
#include "EStaminaAction.generated.h"

UENUM(BlueprintType)
enum class EStaminaAction : uint8 {
    None,
    Walk,
    Run,
    Sprint,
    Crouch,
    LowCrouch,
    Climb,
    Jump,
    MeleeNormal,
    MeleeStrong,
    MeleeButstock,
    Vault,
    GetCount,
};

