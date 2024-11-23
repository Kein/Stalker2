#pragma once
#include "CoreMinimal.h"
#include "EAimAssistPresetType.generated.h"

UENUM(BlueprintType)
enum class EAimAssistPresetType : uint8 {
    Disable,
    Default,
    Focusing,
    Full,
    Custom,
    GetCount,
};

