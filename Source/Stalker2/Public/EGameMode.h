#pragma once
#include "CoreMinimal.h"
#include "EGameMode.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8 {
    ReleaseGame,
    DebugGame,
    Benchmark,
    DeveloperSpectator,
    Death,
    GetCount,
};

