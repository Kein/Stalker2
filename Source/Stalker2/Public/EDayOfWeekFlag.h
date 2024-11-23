#pragma once
#include "CoreMinimal.h"
#include "EDayOfWeekFlag.generated.h"

UENUM(BlueprintType)
enum class EDayOfWeekFlag : uint8 {
    None,
    Monday = 1,
    Tuesday,
    Wednesday = 4,
    Thursday = 8,
    Friday = 16,
    Saturday = 32,
    Sunday = 64,
};

