#pragma once
#include "CoreMinimal.h"
#include "LinearColorParameter.h"
#include "LightShaftsState.generated.h"

USTRUCT()
struct FLightShaftsState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColorParameter BloomTint;
    
    STALKER2_API FLightShaftsState();
};

