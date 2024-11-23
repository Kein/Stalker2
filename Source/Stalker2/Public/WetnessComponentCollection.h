#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "WetnessComponentCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FWetnessComponentCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FWetnessComponentCollection();
};

