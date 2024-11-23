#pragma once
#include "CoreMinimal.h"
#include "EScalabilityQuality.generated.h"

UENUM(BlueprintType)
enum class EScalabilityQuality : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
    XSX_Quality,
    XSX_Performance,
    XSS_Quality,
    XSS_Performance,
    GCin,
    GNar,
    GLev,
    GEC,
    GTemp,
    GDefault,
    GetCount,
};

