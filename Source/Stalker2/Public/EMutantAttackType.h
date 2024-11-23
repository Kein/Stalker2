#pragma once
#include "CoreMinimal.h"
#include "EMutantAttackType.generated.h"

UENUM(BlueprintType)
enum class EMutantAttackType : uint8 {
    None,
    ClawAttack,
    RunAttack,
    JumpAttack,
};

