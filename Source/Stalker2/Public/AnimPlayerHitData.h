#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAnimDirections.h"
#include "EDeathAnimationType.h"
#include "EPlayerAnimDamageSource.h"
#include "AnimPlayerHitData.generated.h"

class UAnimSequence;
class UCurveFloat;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* DeathSequence;
    
    UPROPERTY(EditAnywhere)
    float DeathCameraDistance;
    
    UPROPERTY(BlueprintReadOnly)
    float HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    EPlayerAnimDamageSource DeathDamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimDirections HitAnimDirection;
    
    UPROPERTY(BlueprintReadOnly)
    EDeathAnimationType DeathAnimationType;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDiedLyingDown;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDeathAnimationEnded;
    
    UPROPERTY(BlueprintReadOnly)
    bool bKnockedDown;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator KnockDownRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* KnockDownRotateCurve;
    
    FAnimPlayerHitData();
};

