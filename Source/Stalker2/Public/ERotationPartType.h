#pragma once
#include "CoreMinimal.h"
#include "ERotationPartType.generated.h"

UENUM(BlueprintType)
enum class ERotationPartType : uint8 {
    Eyes,
    Head,
    UpperBody,
    FullBody,
};

