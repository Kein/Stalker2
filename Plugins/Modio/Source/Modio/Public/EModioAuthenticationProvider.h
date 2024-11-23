#pragma once
#include "CoreMinimal.h"
#include "EModioAuthenticationProvider.generated.h"

UENUM(BlueprintType)
enum class EModioAuthenticationProvider : uint8 {
    XboxLive,
    Steam,
    GoG,
    Itch,
    Switch,
    Discord,
    PSN,
    Epic,
    Oculus,
    OpenID,
};

