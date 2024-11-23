#pragma once
#include "CoreMinimal.h"
#include "EDialogAnswerColor.generated.h"

UENUM(BlueprintType)
enum class EDialogAnswerColor : uint8 {
    MainRead,
    MainUnread,
    MainHover,
    CommonRead,
    CommonUnread,
    CommonUnavailable,
    MainUnavailable,
    CommonHover,
    DangerUnread,
};

