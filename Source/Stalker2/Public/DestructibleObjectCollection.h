#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "DestructibleObjectCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FDestructibleObjectCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FDestructibleObjectCollection();
};

