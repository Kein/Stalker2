#pragma once
#include "CoreMinimal.h"
#include "EJamStateTag.generated.h"

UENUM(BlueprintType)
enum class EJamStateTag : uint8 {
    None,
    WeaponJammed,
    WasJammed,
    WasReloaded = 4,
    JamNextShot = 8,
    GetCount,
};

