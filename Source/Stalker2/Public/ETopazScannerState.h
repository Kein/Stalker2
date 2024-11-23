#pragma once
#include "CoreMinimal.h"
#include "ETopazScannerState.generated.h"

UENUM(BlueprintType)
enum class ETopazScannerState : uint8 {
    None,
    Inactive,
    Placing,
    Active,
    Done,
    Collected,
    GetCount,
};

