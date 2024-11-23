#pragma once
#include "CoreMinimal.h"
#include "EWoundedAnimState.generated.h"

UENUM(BlueprintType)
enum class EWoundedAnimState : uint8 {
    NotWounded,
    Falling,
    RagdollLying,
    RagdollWaking,
    ReceiveHeal,
    WakingUp,
};

