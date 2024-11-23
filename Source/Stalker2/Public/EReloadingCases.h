#pragma once
#include "CoreMinimal.h"
#include "EReloadingCases.generated.h"

UENUM(BlueprintType)
enum class EReloadingCases : uint8 {
    None,
    PerBullet,
    Unload,
};

