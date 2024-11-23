#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.h"
#include "ActionMimicSettings.generated.h"

USTRUCT(BlueprintType)
struct FActionMimicSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName InputAction;
    
    UPROPERTY(EditAnywhere)
    EMappingContext MappingContext;
    
    UPROPERTY(EditAnywhere)
    int32 TriggerIndex;
    
    STALKER2_API FActionMimicSettings();
};

