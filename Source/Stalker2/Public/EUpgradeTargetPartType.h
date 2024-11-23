#pragma once
#include "CoreMinimal.h"
#include "EUpgradeTargetPartType.generated.h"

UENUM(BlueprintType)
enum class EUpgradeTargetPartType : uint8 {
    None,
    Stock,
    Body,
    Handguard,
    Barrel,
    PistolGrip,
    GetCount,
};

