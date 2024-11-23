#pragma once
#include "CoreMinimal.h"
#include "EOverrideDialogTopic.generated.h"

UENUM(BlueprintType)
enum class EOverrideDialogTopic : uint8 {
    None,
    Hello,
    Bye,
    Info,
    Defeat,
    DefeatComment,
    CallPlayerComment,
    Resume,
    Busy,
    Trade,
    Upgrade,
    Travel,
    Forced,
    GetCount,
};

