#pragma once
#include "CoreMinimal.h"
#include "BaseModelCollection.h"
#include "AgentModelCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAgentModelCollection : public FBaseModelCollection {
    GENERATED_BODY()
public:
    FAgentModelCollection();
};

