#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AnomalyCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnomalyCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FAnomalyCollection();
};

