#pragma once
#include "CoreMinimal.h"
#include "EDetectorType.generated.h"

UENUM(BlueprintType)
enum class EDetectorType : uint8 {
    None,
    Standard,
    Echo,
    Bear,
    Gilka,
    Veles,
    GetCount,
};

