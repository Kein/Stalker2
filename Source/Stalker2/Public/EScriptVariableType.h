#pragma once
#include "CoreMinimal.h"
#include "EScriptVariableType.generated.h"

UENUM(BlueprintType)
enum class EScriptVariableType : uint8 {
    None,
    BoolVar,
    Int32Var,
    Int64Var,
    FloatVar,
    DoubleVar,
    FStringVar,
    GetCount,
};

