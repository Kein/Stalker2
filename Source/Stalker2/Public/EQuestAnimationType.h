#pragma once
#include "CoreMinimal.h"
#include "EQuestAnimationType.generated.h"

UENUM(BlueprintType)
enum class EQuestAnimationType : uint8 {
    None,
    AfterPDA,
    Show,
    Hidden,
};

