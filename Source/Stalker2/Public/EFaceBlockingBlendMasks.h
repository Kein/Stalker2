#pragma once
#include "CoreMinimal.h"
#include "EFaceBlockingBlendMasks.generated.h"

UENUM(BlueprintType)
enum class EFaceBlockingBlendMasks : uint8 {
    Chin,
    LeftCheek,
    RightCheek,
    Mouth,
    OralCavity,
    Nose,
    LeftEye,
    RightEye,
    LeftTemple,
    RightTemple,
    Forehead,
    Throat,
    GetCount,
    Cheeks,
    Eyes,
    Temples,
};

