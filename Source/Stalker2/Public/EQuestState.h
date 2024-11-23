#pragma once
#include "CoreMinimal.h"
#include "EQuestState.generated.h"

UENUM(BlueprintType)
enum class EQuestState : uint8 {
    None,
    New,
    Active,
    Finished,
    Cancelled,
    Failed,
};

