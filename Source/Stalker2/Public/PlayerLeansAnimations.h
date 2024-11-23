#pragma once
#include "CoreMinimal.h"
#include "PlayerLeansAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerLeansAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* LeanLeftIn;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* LeanLeftOut;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* LeanRightIn;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* LeanRightOut;
    
    STALKER2_API FPlayerLeansAnimations();
};

