#pragma once
#include "CoreMinimal.h"
#include "SimpleMovingAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSimpleMovingAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* ForwardLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* ForwardRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* BackwardLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* BackwardRight;
    
    STALKER2_API FSimpleMovingAnimations();
};

