#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "WorldCompositionAnalyzer.generated.h"

UCLASS()
class STALKER2_API UWorldCompositionAnalyzer : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UWorldCompositionAnalyzer();

private:
    UFUNCTION()
    void OnLevelLoaded();
    
};

