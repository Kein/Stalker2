#pragma once
#include "CoreMinimal.h"
#include "ERagdollAction.generated.h"

UENUM(BlueprintType)
enum class ERagdollAction : uint8 {
    StartWoundedRagdoll,
    StartRagdollLying,
    EndWoundedWakeUp,
};

