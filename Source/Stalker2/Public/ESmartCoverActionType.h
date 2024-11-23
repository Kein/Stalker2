#pragma once
#include "CoreMinimal.h"
#include "ESmartCoverActionType.generated.h"

UENUM(BlueprintType)
enum class ESmartCoverActionType : uint8 {
    Blind,
    LookOut,
    ThrowGrenade,
};

