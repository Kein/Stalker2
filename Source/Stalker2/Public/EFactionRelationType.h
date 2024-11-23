#pragma once
#include "CoreMinimal.h"
#include "EFactionRelationType.generated.h"

UENUM(BlueprintType)
enum class EFactionRelationType : uint8 {
    Neutral,
    Friend,
    Enemy,
};

