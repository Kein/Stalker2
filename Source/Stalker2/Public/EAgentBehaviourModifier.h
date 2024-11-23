#pragma once
#include "CoreMinimal.h"
#include "EAgentBehaviourModifier.generated.h"

UENUM(BlueprintType)
enum class EAgentBehaviourModifier : uint8 {
    Default,
    Zombie,
    Phantom,
    GetCount,
};

