#pragma once
#include "CoreMinimal.h"
#include "HumanWeaponExternalAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FHumanWeaponExternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleCrouchCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleRelaxed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleRelaxedAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* LowCoverIdleAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* HighCoverIdleAdditive;
    
    STALKER2_API FHumanWeaponExternalAnimations();
};

