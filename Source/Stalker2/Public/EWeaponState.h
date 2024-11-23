#pragma once
#include "CoreMinimal.h"
#include "EWeaponState.generated.h"

UENUM(BlueprintType)
enum class EWeaponState : uint8 {
    NoWeapon,
    Relax,
    Combat,
};

