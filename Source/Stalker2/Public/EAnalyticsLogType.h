#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsLogType.generated.h"

UENUM(BlueprintType)
enum class EAnalyticsLogType : uint8 {
    LocalOnly,
    GlobalOnly,
    LocalAndGlobal,
};

