#pragma once
#include "CoreMinimal.h"
#include "UID.h"
#include "ItemUID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FItemUID : public FUID {
    GENERATED_BODY()
public:
    FItemUID();
};

