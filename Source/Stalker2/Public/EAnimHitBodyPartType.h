#pragma once
#include "CoreMinimal.h"
#include "EAnimHitBodyPartType.generated.h"

UENUM(BlueprintType)
enum class EAnimHitBodyPartType : uint8 {
    Head,
    UpperBody,
    LowerBody,
    LeftLeg,
    RightLeg,
};

