#pragma once
#include "CoreMinimal.h"
#include "EStashClueSource.generated.h"

UENUM(BlueprintType)
enum class EStashClueSource : uint8 {
    None,
    QuestReward,
    Loot,
    GetCount,
};

