#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "PhysicsObjectCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPhysicsObjectCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FPhysicsObjectCollection();
};

