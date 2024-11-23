#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "ItemContainerModelCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FItemContainerModelCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FItemContainerModelCollection();
};

