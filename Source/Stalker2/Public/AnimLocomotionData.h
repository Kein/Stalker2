#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DirectionBlendData.h"
#include "EDirections.h"
#include "EStateTag.h"
#include "MovementPlayRateStructure.h"
#include "MovementRotationStructure.h"
#include "AnimLocomotionData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimLocomotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    float AngleDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float ClampedDirection;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 BPDirection;
    
    UPROPERTY(BlueprintReadOnly)
    EDirections Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirectionBlendData DirectionBlendParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovementRotationStructure MovementRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float LegIKAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLegIKEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    FMovementPlayRateStructure MovementPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnablePlayRateCurves;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStateTag, UCurveFloat*> MovementPlayRateCurves;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HeadEvasionOffset;
    
    FAnimLocomotionData();
};

