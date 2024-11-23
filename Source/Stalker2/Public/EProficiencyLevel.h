#pragma once
#include "CoreMinimal.h"
#include "EProficiencyLevel.generated.h"

UENUM(BlueprintType)
enum class EProficiencyLevel : uint8 {
    Novice,
    Regular,
    Veteran,
    Elite,
    GetCount,
};

