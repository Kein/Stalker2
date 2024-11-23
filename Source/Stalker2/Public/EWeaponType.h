#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
    None,
    Pistol,
    Rifle,
    Shotgun,
    GetCount,
};

