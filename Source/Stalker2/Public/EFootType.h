#pragma once
#include "CoreMinimal.h"
#include "EFootType.generated.h"

UENUM(BlueprintType)
enum class EFootType : uint8 {
    None,
    FrontRightFoot,
    FrontLeftFoot,
    BackRightFoot,
    BackLeftFoot,
};

