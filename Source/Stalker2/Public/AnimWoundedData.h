#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EWoundedAnimState.h"
#include "AnimWoundedData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimWoundedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bWounded;
    
    UPROPERTY(BlueprintReadOnly)
    EWoundedAnimState WoundedState;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator SlopeCorrectionDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnterRagdollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeTestSweepUpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeTestSweepDownOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeTestSweepSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> SlopeTestCollisionChannel;
    
    FAnimWoundedData();
};

