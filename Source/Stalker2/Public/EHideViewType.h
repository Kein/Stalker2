#pragma once
#include "CoreMinimal.h"
#include "EHideViewType.generated.h"

UENUM(BlueprintType)
enum class EHideViewType : uint8 {
    ForceHide,
    Hide,
    Unhide,
};

