#pragma once
#include "CoreMinimal.h"
#include "SmartCoverActionSide.h"
#include "SmartCoverAnimationMainLoopData.h"
#include "SmartCoverEnterTypes.h"
#include "SmartCoverExitTypes.h"
#include "SmartCoverTransitionSides.h"
#include "SmartCoverPerCoverTypeData.generated.h"

class UAnimMontage;

USTRUCT()
struct FSmartCoverPerCoverTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSmartCoverEnterTypes> EnterData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSmartCoverExitTypes> ExitData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSmartCoverActionSide> IdlesData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSmartCoverTransitionSides> TransitionsData;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TransitionMontage;
    
    UPROPERTY(EditAnywhere)
    TArray<FSmartCoverAnimationMainLoopData> ActionAnimationsData;
    
    STALKER2_API FSmartCoverPerCoverTypeData();
};

