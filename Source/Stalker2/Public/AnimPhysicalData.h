#pragma once
#include "CoreMinimal.h"
#include "Animation/PoseSnapshot.h"
#include "AnimHitPhysics.h"
#include "AnimPhysicalData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPhysicalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnablePhysicalHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHitPhysics Hit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bRagdollEnabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bRagdollStaticPose;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bWasInRagdoll;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bUpBodyDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FPoseSnapshot RagdollSnapshotPose;
    
    FAnimPhysicalData();
};

