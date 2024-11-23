#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "QuestNodeCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FQuestNodeCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FQuestNodeCollection();
};

