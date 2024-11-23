#pragma once
#include "CoreMinimal.h"
#include "BaseModelCollection.h"
#include "ContextualActionModelCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FContextualActionModelCollection : public FBaseModelCollection {
    GENERATED_BODY()
public:
    FContextualActionModelCollection();
};

