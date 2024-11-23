#pragma once
#include "CoreMinimal.h"
#include "UID.h"
#include "ItemContainerUID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FItemContainerUID : public FUID {
    GENERATED_BODY()
public:
    FItemContainerUID();
};

