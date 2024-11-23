#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "ELookAtOwnerState.h"
#include "ESmartCoverActionType.h"
#include "SmartCoverActionWithSide.h"
#include "SmartCoverAnimationMainLoopData.generated.h"

class UAnimMontage;

USTRUCT()
struct FSmartCoverAnimationMainLoopData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESmartCoverActionType ActionType;
    
    UPROPERTY(EditAnywhere)
    ELookAtOwnerState LookAtOwnerState;
    
    UPROPERTY(EditAnywhere)
    EAvailableCoverActionsSide TargetActionSide;
    
    UPROPERTY(EditAnywhere)
    TArray<FSmartCoverActionWithSide> LookFromCoverMontages;
    
    UPROPERTY(EditAnywhere)
    TArray<FSmartCoverActionWithSide> HideBehindCoverMontages;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* IdleMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ThrowGrenadeMontage;
    
    STALKER2_API FSmartCoverAnimationMainLoopData();
};

