#pragma once
#include "CoreMinimal.h"
#include "EKnockedDownState.generated.h"

UENUM(BlueprintType)
enum class EKnockedDownState : uint8 {
    NotKnockedDown,
    KnockedDown,
};

