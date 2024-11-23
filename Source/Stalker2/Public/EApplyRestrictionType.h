#pragma once
#include "CoreMinimal.h"
#include "EApplyRestrictionType.generated.h"

UENUM(BlueprintType)
enum class EApplyRestrictionType : uint8 {
    Custom,
    LeaveSame,
    Reset,
};

