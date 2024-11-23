#pragma once
#include "CoreMinimal.h"
#include "EEmissionStage.generated.h"

UENUM(BlueprintType)
enum class EEmissionStage : uint8 {
    None,
    BeforeTheStorm,
    ActivateQuest,
    ShockWave,
    Active,
    AfterTheStorm,
    GetCount,
};

