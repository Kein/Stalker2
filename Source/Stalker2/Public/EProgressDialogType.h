#pragma once
#include "CoreMinimal.h"
#include "EProgressDialogType.generated.h"

UENUM(BlueprintType)
enum EProgressDialogType {
    empty,
    Answer,
    Sequence = 4,
    Speech = 8,
};

