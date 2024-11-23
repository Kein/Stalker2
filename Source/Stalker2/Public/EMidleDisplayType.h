#pragma once
#include "CoreMinimal.h"
#include "EMidleDisplayType.generated.h"

UENUM(BlueprintType)
enum class EMidleDisplayType : uint8 {
    None,
    OnlyText,
    Weapons,
    Grenade,
};

