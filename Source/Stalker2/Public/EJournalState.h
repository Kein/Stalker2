#pragma once
#include "CoreMinimal.h"
#include "EJournalState.generated.h"

UENUM(BlueprintType)
enum class EJournalState : uint8 {
    Pending,
    Active,
    Finished,
    Failed,
    Cancelled,
};

