#pragma once
#include "CoreMinimal.h"
#include "EGSCPlatformType.generated.h"

UENUM(BlueprintType)
enum class EGSCPlatformType : uint8 {
    None,
    PC,
    XSX,
    PS5 = 4,
};

