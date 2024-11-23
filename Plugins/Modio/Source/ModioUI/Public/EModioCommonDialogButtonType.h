#pragma once
#include "CoreMinimal.h"
#include "EModioCommonDialogButtonType.generated.h"

UENUM(BlueprintType)
enum class EModioCommonDialogButtonType : uint8 {
    None,
    Back,
    Cancel,
    Confirm = 4,
    Ok = 8,
    ModDetails = 16,
};

