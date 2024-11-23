#pragma once
#include "CoreMinimal.h"
#include "DirectionBlendData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FDirectionBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Forward;
    
    UPROPERTY(BlueprintReadOnly)
    float Backward;
    
    UPROPERTY(BlueprintReadOnly)
    float Left;
    
    UPROPERTY(BlueprintReadOnly)
    float Right;
    
    UPROPERTY(BlueprintReadOnly)
    float ForwardLeft;
    
    UPROPERTY(BlueprintReadOnly)
    float ForwardRight;
    
    UPROPERTY(BlueprintReadOnly)
    float BackwardLeft;
    
    UPROPERTY(BlueprintReadOnly)
    float BackwardRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInterpSpeed;
    
    FDirectionBlendData();
};

