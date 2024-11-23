#pragma once
#include "CoreMinimal.h"
#include "EWoundedType.generated.h"

UENUM(BlueprintType)
enum class EWoundedType : uint8 {
    NotWounded,
    GenericWounded,
    QuestWounded,
};

