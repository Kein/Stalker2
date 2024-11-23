#pragma once
#include "CoreMinimal.h"
#include "MovementParams.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMovementParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrouchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowCrouchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClimbSpeedCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpSpeedCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimpSpeedCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkDiagonalBackCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RunDiagonalBackCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkBackCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RunBackCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveBackCrouchCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveBackLowCrouchCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirControlCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkTransitionCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSlowdownValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StaggerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanDash;
    
    FMovementParams();
};

