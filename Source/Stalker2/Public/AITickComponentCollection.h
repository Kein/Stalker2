#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AITickComponentCollection.generated.h"

class UAITickComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAITickComponentCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UAITickComponent*> AITickComponents;
    
public:
    FAITickComponentCollection();
};

