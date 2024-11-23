#pragma once
#include "CoreMinimal.h"
#include "EContextualActionDialogType.generated.h"

UENUM(BlueprintType)
enum class EContextualActionDialogType : uint8 {
    None,
    Dialog,
    BusyComment,
    Comment,
};

