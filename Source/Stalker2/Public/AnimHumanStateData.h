#pragma once
#include "CoreMinimal.h"
#include "AnimStateData.h"
#include "EAnimationStates.h"
#include "AnimHumanStateData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanStateData : public FAnimStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bInCombat;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWounded;
    
    UPROPERTY(BlueprintReadOnly)
    bool bKnockedDown;
    
    UPROPERTY(BlueprintReadOnly)
    float KnockedDownPoseBlendTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCrouching;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSitting;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRotating;
    
    UPROPERTY(BlueprintReadOnly)
    float CurveGaitValue;
    
    UPROPERTY(BlueprintReadOnly)
    float DynamicGaitValue;
    
    UPROPERTY(BlueprintReadOnly)
    float StateCurveValue;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimationStates CurveGaitState;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasMovementInput;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasContextualItemInHands;
    
    UPROPERTY(BlueprintReadOnly)
    bool bZombie;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSpawnedAsZombie;
    
    UPROPERTY(BlueprintReadOnly)
    bool bStandingUpAsZombie;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldPlayLongBHIdle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDragDeadBody;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldDisableLegIK;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsRenderRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IsRotatingAngleThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldDisableInertialization;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMovementShouldDisableLookAt;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldCopyVirtualWeaponBone;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasEmptyHandsInDialog;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDeadAsNotZombie;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDeadAsZombie;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldTransitionToWeaponRelaxedIdle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bStandToRelaxIdle;
    
    FAnimHumanStateData();
};

