#pragma once
#include "CoreMinimal.h"
#include "EJamType.generated.h"

UENUM(BlueprintType)
enum class EJamType : uint8 {
    Jam,
    Misfire,
    FirstShotMisfire,
};

