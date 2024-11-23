#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AgentCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAgentCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FAgentCollection();
};

