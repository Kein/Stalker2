#pragma once
#include "CoreMinimal.h"
#include "EKillTargetType.generated.h"

UENUM(BlueprintType)
enum class EKillTargetType : uint8 {
    NPCTarget,
    PlayerTarget,
    AreaTarget,
};

