#pragma once
#include "CoreMinimal.h"
#include "EModifyAbilitySequenceQuestNodeMode.generated.h"

UENUM(BlueprintType)
enum class EModifyAbilitySequenceQuestNodeMode : uint8 {
    AddAbility,
    RemoveAbility,
};

