#pragma once
#include "CoreMinimal.h"
#include "UID.h"
#include "GroupUID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FGroupUID : public FUID {
    GENERATED_BODY()
public:
    FGroupUID();
};

