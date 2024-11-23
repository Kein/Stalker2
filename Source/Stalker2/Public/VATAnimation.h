#pragma once
#include "CoreMinimal.h"
#include "VATAnimation.generated.h"

USTRUCT(BlueprintType)
struct FVATAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StateName;
    
    UPROPERTY(EditAnywhere)
    float FrameStart;
    
    UPROPERTY(EditAnywhere)
    float FrameEnd;
    
    UPROPERTY(EditAnywhere)
    float FrameRate;
    
    UPROPERTY(EditAnywhere)
    float PlaybackRate;
    
    UPROPERTY(EditAnywhere)
    float BlendOutDuration;
    
    UPROPERTY(EditAnywhere)
    bool bIsLooped;
    
    STALKER2_API FVATAnimation();
};

