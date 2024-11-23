#pragma once
#include "CoreMinimal.h"
#include "ECurrentActiveWeapon.generated.h"

UENUM(BlueprintType)
enum class ECurrentActiveWeapon : uint8 {
    None,
    Primary,
    Secondary,
    GetCount,
};

