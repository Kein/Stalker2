#pragma once
#include "CoreMinimal.h"
#include "EStayBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EStayBehaviorType : uint8 {
    Animation,
    ContextualAction,
    Idle,
};

