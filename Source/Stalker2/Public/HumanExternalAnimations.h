#pragma once
#include "CoreMinimal.h"
#include "HumanHitAnimations.h"
#include "HumanKnockDownAnimations.h"
#include "HumanLookAtAnimations.h"
#include "HumanExternalAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FHumanExternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHumanHitAnimations DefaultHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHumanHitAnimations ShotgunHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHumanKnockDownAnimations KnockdownAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHumanLookAtAnimations LookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleRelaxed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleRelaxedAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* StandToCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* CrouchToStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* StandToRelax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* RelaxToStand;
    
    STALKER2_API FHumanExternalAnimations();
};

