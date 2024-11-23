#pragma once
#include "CoreMinimal.h"
#include "ERelationLevel.generated.h"

UENUM(BlueprintType)
enum class ERelationLevel : uint8 {
    Enemy,
    Disaffection,
    Neutral,
    Friend,
    Self,
    Count,
};

