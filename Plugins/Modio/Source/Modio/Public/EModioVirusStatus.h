#pragma once
#include "CoreMinimal.h"
#include "EModioVirusStatus.generated.h"

UENUM(BlueprintType)
enum class EModioVirusStatus : uint8 {
    NoThreat,
    Malicious,
};

