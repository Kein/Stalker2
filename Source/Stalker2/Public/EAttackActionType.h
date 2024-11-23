#pragma once
#include "CoreMinimal.h"
#include "EAttackActionType.generated.h"

UENUM()
enum class EAttackActionType : int8 {
    None,
    Shoot,
    Melee,
    Throw,
    Reload,
    Jam,
    Idle,
    Attach,
    ChargeGrenade,
    GetCount,
};

