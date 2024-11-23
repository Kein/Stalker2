#pragma once
#include "CoreMinimal.h"
#include "EPageOpenMethod.generated.h"

UENUM(BlueprintType)
enum class EPageOpenMethod : uint8 {
    Unknown,
    FromDialog,
    ByHotkey,
    BySwitchingTabs,
};

