#pragma once
#include "CoreMinimal.h"
#include "PlayerAutoCoverAnimations.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FPlayerAutoCoverAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* StandInCoverPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* ApproachCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* ApproachCoverLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* ApproachCoverRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* ExitCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* CanLeanLeftPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* CanLeanRightPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AimLeftPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AimRightPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* AimLeftPoseBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* AimRightPoseBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AimUpPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AimlessShootLeftPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AimlessShootRightPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* AimlessShootUpPose;
    
    STALKER2_API FPlayerAutoCoverAnimations();
};

