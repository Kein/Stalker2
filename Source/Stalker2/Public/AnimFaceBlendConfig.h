#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "AnimFaceBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimFaceBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAlphaBlend BlendIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDynamicBlendOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FaceBlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FaceBlendOutTriggerTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange AnimationLengthRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange BlendOutTriggerTimeRange;
    
    FAnimFaceBlendConfig();
};

