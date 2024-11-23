#pragma once
#include "CoreMinimal.h"
#include "BaseModelCollection.h"
#include "DestructibleModelCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FDestructibleModelCollection : public FBaseModelCollection {
    GENERATED_BODY()
public:
    FDestructibleModelCollection();
};

