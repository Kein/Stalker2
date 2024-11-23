#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimBodyPartBonesConfig.h"
#include "AnimHitBodyPart.h"
#include "EAnimDirections.h"
#include "EAnimHitBodyPartType.h"
#include "EAnimHitSourceType.h"
#include "EDeathAnimationType.h"
#include "EHumanAnimDamageSource.h"
#include "AnimHitData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableAnimationHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAnimHitBodyPart> Hits;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimHitSourceType HitSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 MaxCountOfSimultaneouslyPlayedHitAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 NumberOfAnimationsWhenFirstWillBeStopped;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimHitBodyPartType LastHittedBodyPart;
    
    UPROPERTY(BlueprintReadOnly)
    float HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float HitVerticalDirection;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimDirections HitAnimDirection;
    
    UPROPERTY(BlueprintReadOnly)
    EDeathAnimationType DeathAnimationType;
    
    UPROPERTY(BlueprintReadOnly)
    EHumanAnimDamageSource DeathDamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* DeadPose;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDiedLyingDown;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDiedFromAbove;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, FRotator> ForceWarpActorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAnimBodyPartBonesConfig> BodyPartBonesConfig;
    
    FAnimHitData();
};

