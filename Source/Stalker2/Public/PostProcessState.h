#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "PostProcessState.generated.h"

USTRUCT()
struct FPostProcessState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter DiffuseColorBoost;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter SkylightLeaking;
    
    STALKER2_API FPostProcessState();
};

