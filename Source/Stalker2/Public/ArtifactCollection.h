#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "ArtifactCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FArtifactCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FArtifactCollection();
};

