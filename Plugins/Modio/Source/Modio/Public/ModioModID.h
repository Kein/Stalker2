#pragma once
#include "CoreMinimal.h"
#include "ModioModID.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModID {
    GENERATED_BODY()
public:
    FModioModID();
};
FORCEINLINE uint32 GetTypeHash(const FModioModID) { return 0; }

