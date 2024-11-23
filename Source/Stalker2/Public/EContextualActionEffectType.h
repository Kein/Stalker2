#pragma once
#include "CoreMinimal.h"
#include "EContextualActionEffectType.generated.h"

UENUM(BlueprintType)
enum class EContextualActionEffectType : uint8 {
    None,
    ChangeNeedValue,
    AddCurrentNeed,
    RemoveCurrentNeed,
};

