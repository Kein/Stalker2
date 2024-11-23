#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AkLateReverbCollection.generated.h"

class UAkLateReverbComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAkLateReverbCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UAkLateReverbComponent*> LateReverbComponents;
    
public:
    FAkLateReverbCollection();
};

