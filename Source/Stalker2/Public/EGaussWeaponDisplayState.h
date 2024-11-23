#pragma once
#include "CoreMinimal.h"
#include "EGaussWeaponDisplayState.generated.h"

UENUM(BlueprintType)
enum class EGaussWeaponDisplayState : uint8 {
    Default,
    Discharge,
    Charge,
};

