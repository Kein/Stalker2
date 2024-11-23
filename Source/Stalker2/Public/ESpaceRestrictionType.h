#pragma once
#include "CoreMinimal.h"
#include "ESpaceRestrictionType.generated.h"

UENUM(BlueprintType)
enum class ESpaceRestrictionType : uint8 {
    None,
    In,
    Out,
};

