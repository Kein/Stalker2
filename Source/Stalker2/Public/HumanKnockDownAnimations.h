#pragma once
#include "CoreMinimal.h"
#include "HumanKnockDownAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FHumanKnockDownAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* KnockDownInForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* KnockDownInBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* KnockDownInLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* KnockDownInRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* KnockDownOut;
    
    STALKER2_API FHumanKnockDownAnimations();
};

