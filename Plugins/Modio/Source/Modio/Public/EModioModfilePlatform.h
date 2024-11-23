#pragma once
#include "CoreMinimal.h"
#include "EModioModfilePlatform.generated.h"

UENUM(BlueprintType)
enum class EModioModfilePlatform : uint8 {
    Windows,
    Mac,
    Linux,
    Android,
    iOS,
    XboxOne,
    XboxSeriesX,
    PS4,
    PS5,
    Switch,
    Oculus,
    Source,
};

