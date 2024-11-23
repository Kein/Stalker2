#pragma once
#include "CoreMinimal.h"
#include "ESpawnNodeExcludeType.generated.h"

UENUM(BlueprintType)
enum class ESpawnNodeExcludeType : uint8 {
    SeamlessDespawn,
    ForceDespawn,
    KillSpawnedObj,
};

