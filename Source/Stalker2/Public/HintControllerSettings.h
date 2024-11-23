#pragma once
#include "CoreMinimal.h"
#include "AdvancedControllerSettings.h"
#include "EMappingContext.h"
#include "HintControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct FHintControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName InputAction;
    
    UPROPERTY(EditAnywhere)
    FName CustomInputIconName;
    
    UPROPERTY(EditAnywhere)
    EMappingContext MappingContext;
    
    UPROPERTY(EditAnywhere)
    FAdvancedControllerSettings GamepadAdvancedSettings;
    
    UPROPERTY(EditAnywhere)
    FAdvancedControllerSettings KeyboardAdvancedSettings;
    
    STALKER2_API FHintControllerSettings();
};

