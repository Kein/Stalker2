#pragma once
#include "CoreMinimal.h"
#include "EShootingRadiusType.generated.h"

UENUM(BlueprintType)
enum class EShootingRadiusType : uint8 {
    None,
    RecoilRadius,
    DispersionRadius,
    DispersionRadiusAI = 4,
};

