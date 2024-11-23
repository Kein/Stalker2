#pragma once
#include "CoreMinimal.h"
#include "EAttractionPointType.generated.h"

UENUM(BlueprintType)
enum class EAttractionPointType : uint8 {
    StaticLocation,
    FollowObject,
    FollowCharacterBone,
    ExitLookAt,
};

