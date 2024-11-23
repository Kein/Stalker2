#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ManagerTickFunction.generated.h"

USTRUCT()
struct FManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STALKER2_API FManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FManagerTickFunction> : public TStructOpsTypeTraitsBase2<FManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

