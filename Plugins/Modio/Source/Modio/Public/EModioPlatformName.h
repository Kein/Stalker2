#pragma once
#include "CoreMinimal.h"
#include "EModioPlatformName.generated.h"

UENUM(BlueprintType)
enum class EModioPlatformName : uint8 {
    Windows,
    Mac,
    Linux,
    PS4,
    PS5,
    XBoxOne,
    XSX,
    Switch,
    Unknown,
};

