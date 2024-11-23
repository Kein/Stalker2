#pragma once
#include "CoreMinimal.h"
#include "EModioImageState.generated.h"

UENUM(BlueprintType)
enum class EModioImageState : uint8 {
    OnDisc,
    LoadingIntoMemory,
    InMemory,
    Corrupted,
};

