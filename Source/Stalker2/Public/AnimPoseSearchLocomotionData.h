#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/BoneControllerTypes.h"
#include "Animation/MotionTrajectoryTypes.h"
#include "GameplayTagContainer.h"
#include "PoseSearch/PoseSearchLibrary.h"
// FIXME
// #include "PoseSearchProceduralMovement.h"
#include "EAnimPoseSearchMoveType.h"
#include "ESmartCoverType.h"
#include "AnimPoseSearchLocomotionData.generated.h"

class UCurveFloat;
class UPoseSearchLocomotionCharacterMovementComponent;
class UPoseSearchSearchableAsset;

USTRUCT(BlueprintType)
struct FAnimPoseSearchLocomotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTrajectorySampleRange Trajectory;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* StrafeRotateInterpSpeedCurve;
    
    UPROPERTY(BlueprintReadOnly)
    bool bForcedIdling;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldInterrupt;
    
    UPROPERTY()
    float EnableLookAtAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FMotionMatchingSettings Settings;
    
    // FIXME
    // UPROPERTY(BlueprintReadOnly)
    // FPoseSearchProceduralMovement ProceduralMovement;
    
    UPROPERTY(BlueprintReadOnly)
    FWarpingVectorValue FloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPoseSearchSearchableAsset* Searchable;
    
    UPROPERTY(BlueprintReadOnly)
    float StrideScale;
    
    UPROPERTY(BlueprintReadOnly)
    float LegIKAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUseRelaxLocomotion;
    
    UPROPERTY(BlueprintReadOnly)
    float HistoryExpirationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAnimPoseSearchMoveType, float> MoveTypeStayInIndexTime;
    
    UPROPERTY(BlueprintReadOnly)
    ESmartCoverType SmartCoverType;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsingSmartCoverAnimPose;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveBehaviorOnlyTransitionUseTime;
    
    UPROPERTY(Instanced)
    UPoseSearchLocomotionCharacterMovementComponent* MovementComponent;
    
    STALKER2_API FAnimPoseSearchLocomotionData();
};

