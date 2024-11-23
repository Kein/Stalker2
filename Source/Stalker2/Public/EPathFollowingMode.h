#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingMode.generated.h"

UENUM(BlueprintType)
enum class EPathFollowingMode : uint8 {
    None,
    PreferAnimElseProcedural,
    PreferProceduralElseAnim,
    PreferProceduralElseStop,
    GetCount,
};

