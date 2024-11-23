#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "PhysicalManagerCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPhysicalManagerCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FPhysicalManagerCollection();
};

