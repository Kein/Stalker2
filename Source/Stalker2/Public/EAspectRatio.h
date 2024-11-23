#pragma once
#include "CoreMinimal.h"
#include "EAspectRatio.generated.h"

UENUM(BlueprintType)
enum class EAspectRatio : uint8 {
    Auto,
    X16Y9,
    X16Y10,
    X21Y9,
    X32Y9,
    X4Y3,
    GetCount,
};

