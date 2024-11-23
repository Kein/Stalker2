#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAutoCoverState.h"
#include "AnimPlayerAutoCoverData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerAutoCoverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bFrontTraceBlocked;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRightTraceBlocked;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLeftTraceBlocked;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUpTraceBlocked;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LastNonBlockedSideTraceStart;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInCover;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAutoCoverActionActive;
    
    UPROPERTY(BlueprintReadOnly)
    float AimLeanTime;
    
    UPROPERTY(BlueprintReadOnly)
    float ApproachTransitionPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float LeaningAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanChangeLeanSide;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCoverlessLeaning;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCoverlessLeaningRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRangeDistanceToCover;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxRangeDistanceToChangeLeanSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoverForwardTraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoverAimTraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoverUpperTraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoverSideTracesRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoverLeanTracesRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CoverLeanTracesIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoverTraceHorizontalShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoverTraceVerticalShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinCoverWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApproachTransitionMinPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApproachTransitionMaxPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    EAutoCoverState CoverState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadHeightStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadHeightCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadHeightLowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccumulatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceDirectionBindedToCamera;
    
    FAnimPlayerAutoCoverData();
};

