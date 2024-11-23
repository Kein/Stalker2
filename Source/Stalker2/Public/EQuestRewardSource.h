#pragma once
#include "CoreMinimal.h"
#include "EQuestRewardSource.generated.h"

UENUM(BlueprintType)
enum class EQuestRewardSource : uint8 {
    None,
    MainLine,
    SideLine,
    GetCount,
};

