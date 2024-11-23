#pragma once
#include "CoreMinimal.h"
#include "EGameMonetizationFlags.generated.h"

UENUM(BlueprintType)
enum class EGameMonetizationFlags : uint8 {
    None,
    Monetization,
    Marketplace,
    PartnerProgram = 4,
};

