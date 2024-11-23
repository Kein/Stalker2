#pragma once
#include "CoreMinimal.h"
#include "EKeyCategory.generated.h"

UENUM(BlueprintType)
enum class EKeyCategory : uint8 {
    Movement,
    Weapon,
    PDA,
    General,
    Developer,
    GetCount,
};

