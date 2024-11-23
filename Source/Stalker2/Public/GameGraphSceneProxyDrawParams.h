#pragma once
#include "CoreMinimal.h"
#include "GameGraphSceneProxyDrawParams.generated.h"

USTRUCT(BlueprintType)
struct FGameGraphSceneProxyDrawParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableMinMaxPathColoring;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAgentSupportMaskColoring;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePolyBindConnectivityColoring;
    
    UPROPERTY(EditAnywhere)
    bool bDebugContextualActions;
    
    UPROPERTY(EditAnywhere)
    int32 PolyBindConnectivityNavDataIdx;
    
    STALKER2_API FGameGraphSceneProxyDrawParams();
};

