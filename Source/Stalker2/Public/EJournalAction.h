#pragma once
#include "CoreMinimal.h"
#include "EJournalAction.generated.h"

UENUM(BlueprintType)
enum class EJournalAction : uint8 {
    Start,
    Finish,
    Fail,
    Cancel,
    ChangeStageDescription,
};

