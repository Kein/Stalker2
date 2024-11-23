#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriticalHitAnimations.h"
#include "EAnimStealthKillPose.h"
#include "EAnimationTargetType.h"
#include "EAnomalyAnimInteraction.h"
#include "HumanExternalAnimations.h"
#include "PoseSearchLocomotionAnimCollectionData.h"
#include "HumanAnimCollection.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class STALKER2_API UHumanAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAnomalyAnimInteraction, UAnimMontage*> AnomalyInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAnimationTargetType, UAnimMontage*> AnimationTargetTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHumanExternalAnimations ExternalAnimations;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimStealthKillPose, UAnimMontage*> StealthDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCriticalHitAnimations> CriticalHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseSearchLocomotionAnimCollectionData PoseSearchLocomotionAnimCollectionData;
    
public:
    UHumanAnimCollection();

};

