#pragma once
#include "CoreMinimal.h"
#include "EFilterMode.generated.h"

UENUM(BlueprintType)
enum class EFilterMode : uint8 {
    Disabled,
    Blacklist,
    Whitelist,
};

