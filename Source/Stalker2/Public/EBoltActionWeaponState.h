#pragma once
#include "CoreMinimal.h"
#include "EBoltActionWeaponState.generated.h"

UENUM(BlueprintType)
enum class EBoltActionWeaponState : uint8 {
    NotBolted,
    ReadyToShoot,
    NoBoltAction,
};

