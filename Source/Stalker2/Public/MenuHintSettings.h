#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.h"
#include "MenuHintSettings.generated.h"

USTRUCT()
struct FMenuHintSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMappingContext MappingContext;
    
    UPROPERTY(EditAnywhere)
    int32 KeyboardAndMouseMappingIndex;
    
    UPROPERTY(EditAnywhere)
    int32 GamepadMappingIndex;
    
    UPROPERTY(EditAnywhere)
    int32 TriggerIndex;
    
    STALKER2_API FMenuHintSettings();
};

