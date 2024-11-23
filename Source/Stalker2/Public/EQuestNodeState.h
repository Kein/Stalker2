#pragma once
#include "CoreMinimal.h"
#include "EQuestNodeState.generated.h"

UENUM(BlueprintType)
enum class EQuestNodeState : uint8 {
    None,
    Activated,
    Excluded,
    Finished,
};

