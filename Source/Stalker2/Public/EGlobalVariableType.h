#pragma once
#include "CoreMinimal.h"
#include "EGlobalVariableType.generated.h"

UENUM(BlueprintType)
enum class EGlobalVariableType : uint8 {
    Int,
    String,
    Bool,
    GetCount,
};

