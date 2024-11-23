#pragma once
#include "CoreMinimal.h"
#include "BaseModelCollection.h"
#include "AnomalyModelCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnomalyModelCollection : public FBaseModelCollection {
    GENERATED_BODY()
public:
    FAnomalyModelCollection();
};

