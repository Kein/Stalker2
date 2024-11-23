#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "HeadFlashlightComponentCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FHeadFlashlightComponentCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FHeadFlashlightComponentCollection();
};

