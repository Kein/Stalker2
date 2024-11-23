#pragma once
#include "CoreMinimal.h"
#include "ESpawnSource.generated.h"

UENUM(BlueprintType)
enum class ESpawnSource : uint8 {
    Quest,
    ALife,
    ALifeDirector,
    SummonAbility,
    Debug,
};

