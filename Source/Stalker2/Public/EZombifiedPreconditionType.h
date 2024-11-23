#pragma once
#include "CoreMinimal.h"
#include "EZombifiedPreconditionType.generated.h"

UENUM(BlueprintType)
enum class EZombifiedPreconditionType : uint8 {
    ZombieOnly,
    AliveOnly,
};

