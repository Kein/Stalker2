#pragma once
#include "CoreMinimal.h"
#include "EAnimClimbState.h"
#include "ELadderType.h"
#include "AnimPlayerClimbingData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerClimbingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bAnimClimbStarted;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimClimbState AnimClimbState;
    
    UPROPERTY(BlueprintReadOnly)
    float ClimbUpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float ClimbDownSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float EnterDownSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float EnterUpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float ExitUpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float CameraYaw;
    
    UPROPERTY(BlueprintReadOnly)
    float CameraPitch;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLongIdleEnable;
    
    UPROPERTY(BlueprintReadOnly)
    bool bJumpingOffLadderState;
    
    UPROPERTY(BlueprintReadOnly)
    bool bJumpingOffLadderBottomState;
    
    UPROPERTY(BlueprintReadOnly)
    ELadderType LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BottomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ELadderType, float> FrontOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SingleStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraFocusOnExitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraFocusOnExitInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* EnterTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToStartLongIdle;
    
    FAnimPlayerClimbingData();
};

