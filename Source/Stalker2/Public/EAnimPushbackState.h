#pragma once
#include "CoreMinimal.h"
#include "EAnimPushbackState.generated.h"

UENUM(BlueprintType)
enum class EAnimPushbackState : uint8 {
    Inactive,
    Active,
    Delayed,
    BlendingOut,
};

