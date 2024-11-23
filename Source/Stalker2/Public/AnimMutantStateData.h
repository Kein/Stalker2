#pragma once
#include "CoreMinimal.h"
#include "AnimStateData.h"
#include "EAwareness.h"
#include "AnimMutantStateData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimMutantStateData : public FAnimStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bRotating;
    
    UPROPERTY(BlueprintReadOnly)
    bool bStandToSit;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsLeftHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChanceToBeLeftHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IsRotatingAngleThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    EAwareness Awareness;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldDisableLegIK;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldDisableInertialization;
    
    FAnimMutantStateData();
};

