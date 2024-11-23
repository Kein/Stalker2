#pragma once
#include "CoreMinimal.h"
#include "EDuplicateResolveType.generated.h"

UENUM(BlueprintType)
enum class EDuplicateResolveType : uint8 {
    KeepNew,
    KeepOld,
    KeepAll,
};

