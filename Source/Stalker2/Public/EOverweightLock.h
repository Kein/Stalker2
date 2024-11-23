#pragma once
#include "CoreMinimal.h"
#include "EOverweightLock.generated.h"

UENUM(BlueprintType)
enum class EOverweightLock : uint8 {
    NoLock,
    Partial,
    Full,
};

