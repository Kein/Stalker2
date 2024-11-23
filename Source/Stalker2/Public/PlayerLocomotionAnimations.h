#pragma once
#include "CoreMinimal.h"
#include "TransitionAnimations.h"
#include "PlayerLocomotionAnimations.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FPlayerLocomotionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* StandIdleInHip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* CrouchIdleInHip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* LowCrouchIdleInHip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransitionAnimations StandToCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransitionAnimations CrouchToLowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransitionAnimations StandToLowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* Sprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* SprintWithDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* Run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* RunWithDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* RunCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* WalkWithDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* WalkAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* WalkLimp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* CrouchAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* LowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* LowCrouchAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* WalkStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* WalkStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* RunStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* RunStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* RunToSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* SprintStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* SprintToRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* StandTurnInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* CrouchTurnInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpStartLowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpLoopLowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* JumpEndLowCrouch;
    
    STALKER2_API FPlayerLocomotionAnimations();
};

