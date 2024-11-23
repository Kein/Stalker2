#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "StreamingDistanceOverrideTickFunction.generated.h"

USTRUCT()
struct FStreamingDistanceOverrideTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STALKER2_API FStreamingDistanceOverrideTickFunction();
};

template<>
struct TStructOpsTypeTraits<FStreamingDistanceOverrideTickFunction> : public TStructOpsTypeTraitsBase2<FStreamingDistanceOverrideTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

