#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AIEntityCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAIEntityCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FAIEntityCollection();
};

