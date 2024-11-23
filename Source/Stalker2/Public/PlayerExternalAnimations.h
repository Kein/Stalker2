#pragma once
#include "CoreMinimal.h"
#include "PlayerLeansAnimations.h"
#include "PlayerLocomotionAnimations.h"
#include "PlayerExternalAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerExternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayerLocomotionAnimations UpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayerLocomotionAnimations LowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* LookVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayerLeansAnimations Leans;
    
    STALKER2_API FPlayerExternalAnimations();
};

