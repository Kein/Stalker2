#pragma once
#include "CoreMinimal.h"
#include "AnimStateData.h"
#include "EAnimationStates.h"
#include "AnimPlayerStateData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerStateData : public FAnimStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bWalkingOverride;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCrouching;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLowCrouching;
    
    UPROPERTY(BlueprintReadOnly)
    bool bClimbing;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLimping;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShootingUnfocusableTarget;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDragDeadBody;
    
    UPROPERTY(BlueprintReadOnly)
    bool bActionSlotActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsLeftHandBusy;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsInspectingItem;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCrouchingOverride;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLowCrouchingOverride;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSprintingOverride;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInAirOverride;
    
    UPROPERTY(EditAnywhere)
    float CrouchingInWaterInterruptionTime;
    
    UPROPERTY(EditAnywhere)
    float SprintingInWaterInterruptionTime;
    
    UPROPERTY(EditAnywhere)
    float InAirInWaterInterruptionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CombatIdleDuration;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCombatMoveIdle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCombatCrouchIdle;
    
    UPROPERTY()
    bool bCombatActionActive;
    
    UPROPERTY()
    float CombatIdleCooldown;
    
    UPROPERTY(BlueprintReadOnly)
    bool bForceBindedHandsLookVertical;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasExoskeleton;
    
    UPROPERTY(BlueprintReadOnly)
    float CurveGaitValue;
    
    UPROPERTY(BlueprintReadOnly)
    float DynamicGaitValue;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimationStates EnumGaitState;
    
    FAnimPlayerStateData();
};

