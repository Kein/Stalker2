#pragma once
#include "CoreMinimal.h"
#include "ALifeScenarioGroupSIDSelector.generated.h"

USTRUCT()
struct STALKER2_API FALifeScenarioGroupSIDSelector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Value;
    
    FALifeScenarioGroupSIDSelector();
};

