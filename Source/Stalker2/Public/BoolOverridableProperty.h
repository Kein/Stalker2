#pragma once
#include "CoreMinimal.h"
#include "OverridableProperty.h"
#include "BoolOverridableProperty.generated.h"

USTRUCT()
struct FBoolOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool DefaultValue;
    
    UPROPERTY(EditAnywhere)
    bool CurrentValue;
    
    STALKER2_API FBoolOverridableProperty();
};

