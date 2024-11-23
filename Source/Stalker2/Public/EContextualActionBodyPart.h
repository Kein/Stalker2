#pragma once
#include "CoreMinimal.h"
#include "EContextualActionBodyPart.generated.h"

UENUM(BlueprintType)
enum class EContextualActionBodyPart : uint8 {
    None,
    Head,
    Back,
    Skirt = 4,
};

