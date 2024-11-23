#pragma once
#include "CoreMinimal.h"
#include "LightShaftsState.h"
#include "LightState.h"
#include "DirectionalLightState.generated.h"

USTRUCT()
struct FDirectionalLightState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLightState Light;
    
    UPROPERTY(EditAnywhere)
    FLightShaftsState LightShafts;
    
    STALKER2_API FDirectionalLightState();
};

