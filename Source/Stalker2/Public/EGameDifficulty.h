#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.generated.h"

UENUM(BlueprintType)
enum class EGameDifficulty : uint8 {
    Easy,
    Medium,
    Hard,
    Stalker,
    GetCount,
};

