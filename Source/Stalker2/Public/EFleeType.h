#pragma once
#include "CoreMinimal.h"
#include "EFleeType.generated.h"

UENUM(BlueprintType)
enum class EFleeType : uint8 {
    FleeFromCurrentLocation,
    FleeFromCustomLocation,
    FleeFromPlayer,
    FleeFromNPC,
};

