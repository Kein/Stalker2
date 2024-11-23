#pragma once
#include "CoreMinimal.h"
#include "EHealingType.generated.h"

UENUM(BlueprintType)
enum class EHealingType : uint8 {
    Quest,
    HoldComponent,
    Dialog,
};

