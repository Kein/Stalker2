#pragma once
#include "CoreMinimal.h"
#include "AdvancedControllerSettings.generated.h"

USTRUCT()
struct FAdvancedControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MappingIndex;
    
    UPROPERTY(EditAnywhere)
    int32 TriggerIndex;
    
    STALKER2_API FAdvancedControllerSettings();
};

