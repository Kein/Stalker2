#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "CreatorTickFunction.generated.h"

USTRUCT()
struct FCreatorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STALKER2_API FCreatorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCreatorTickFunction> : public TStructOpsTypeTraitsBase2<FCreatorTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

