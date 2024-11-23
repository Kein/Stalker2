#pragma once
#include "CoreMinimal.h"
#include "EQuestHintState.generated.h"

UENUM(BlueprintType)
enum class EQuestHintState : uint8 {
    None,
    OpenJournal,
    Track,
    Untrack,
};

