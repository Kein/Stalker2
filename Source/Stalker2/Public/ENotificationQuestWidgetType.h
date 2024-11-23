#pragma once
#include "CoreMinimal.h"
#include "ENotificationQuestWidgetType.generated.h"

UENUM(BlueprintType)
enum class ENotificationQuestWidgetType : uint8 {
    QuestStart,
    QuestFinish,
    QuestFail,
    QuestCancel,
};

