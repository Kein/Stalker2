#pragma once
#include "CoreMinimal.h"
#include "EWeaponFireResult.generated.h"

UENUM(BlueprintType)
enum class EWeaponFireResult : uint8 {
    None,
    Fired,
    NotEnoughAmmo,
    Jammed,
    Interrupted,
    GetCount,
};

