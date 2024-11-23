#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AkComponentCollection.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAkComponentCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UAkComponent*> AkComponents;
    
public:
    FAkComponentCollection();
};

