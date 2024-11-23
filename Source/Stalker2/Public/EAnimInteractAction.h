#pragma once
#include "CoreMinimal.h"
#include "EAnimInteractAction.generated.h"

UENUM(BlueprintType)
enum class EAnimInteractAction : uint8 {
    None,
    OpenLootMenu,
    CloseLootMenu,
    StartPlayerContextualAction,
    TriggerNotifyEvent,
};

