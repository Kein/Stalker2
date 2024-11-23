#pragma once
#include "CoreMinimal.h"
#include "EDamageBone.generated.h"

UENUM(BlueprintType)
enum class EDamageBone : uint8 {
    Head,
    Body,
    Limbs,
    GetCount,
};

