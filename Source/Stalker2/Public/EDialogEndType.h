#pragma once
#include "CoreMinimal.h"
#include "EDialogEndType.generated.h"

UENUM(BlueprintType)
enum class EDialogEndType : uint8 {
    None,
    CloseUI,
    ReturnToTopicSelection,
    GetCount,
};

