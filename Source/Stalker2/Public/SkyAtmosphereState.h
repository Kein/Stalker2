#pragma once
#include "CoreMinimal.h"
#include "SkyAtmosphereBaseState.h"
#include "SkyAtmosphereRayleighMieState.h"
#include "SkyAtmosphereState.generated.h"

USTRUCT()
struct FSkyAtmosphereState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSkyAtmosphereBaseState Base;
    
    UPROPERTY(EditAnywhere)
    FSkyAtmosphereRayleighMieState RayleighMie;
    
    STALKER2_API FSkyAtmosphereState();
};

