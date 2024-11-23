#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "EmissionManager.generated.h"

UCLASS()
class STALKER2_API UEmissionManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UEmissionManager();

protected:
    UFUNCTION()
    void GeneratorsSequenceIdle();
    
};

