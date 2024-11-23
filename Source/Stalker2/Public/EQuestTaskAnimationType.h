#pragma once
#include "CoreMinimal.h"
#include "EQuestTaskAnimationType.generated.h"

UENUM(BlueprintType)
enum class EQuestTaskAnimationType : uint8 {
    None,
    TaskStart,
    TaskFinish,
    TaskFail,
    TaskCancel,
};

