#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.h"
#include "OverridableProperty.h"
#include "FactionOverridableProperty.generated.h"

USTRUCT()
struct FFactionOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFactionSelector DefaultValue;
    
    UPROPERTY(EditAnywhere)
    FFactionSelector CurrentValue;
    
    STALKER2_API FFactionOverridableProperty();
};

