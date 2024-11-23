#pragma once
#include "CoreMinimal.h"
#include "EContextualActionNodeType.generated.h"

UENUM(BlueprintType)
enum class EContextualActionNodeType : uint8 {
    None,
    Start,
    Animation,
    SoundDependentAnimation,
    RandomSelector,
    SequentialSelector,
    DistanceSelector,
    Interrupt,
    ConditionalSelector,
};

