#pragma once
#include "CoreMinimal.h"
#include "EFloatProviderType.generated.h"

UENUM(BlueprintType)
enum class EFloatProviderType : uint8 {
    None,
    Constant,
    Conditional,
    PlayerVital,
    Weather,
    PostEffect,
    Blink,
    ObjParam,
    Add,
    Subtract,
    Multiply,
    Divide,
    GetCount,
};

