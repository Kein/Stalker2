#pragma once
#include "CoreMinimal.h"
#include "AnimAbilityData.h"
#include "AnimCutsceneData.h"
#include "AnimHitData.h"
#include "AnimHumanCollectionsData.h"
#include "AnimHumanDialogData.h"
#include "AnimHumanFaceData.h"
#include "AnimHumanLookAtData.h"
#include "AnimHumanStateData.h"
#include "AnimHumanWeaponData.h"
#include "AnimInstanceBase.h"
#include "AnimKnockDownData.h"
#include "AnimPhysicalData.h"
#include "AnimPoseSearchLocomotionData.h"
#include "AnimTwoHandsIKData.h"
#include "AnimWoundedData.h"
#include "TwoLegIKData.h"
#include "AnimInstanceHuman.generated.h"

class UAnimSequenceBase;

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceHuman : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanWeaponData WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimWoundedData WoundedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimKnockDownData KnockDownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanCollectionsData CollectionsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimTwoHandsIKData HandsIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanFaceData FaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanLookAtData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanDialogData DialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPhysicalData PhysicalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTwoLegIKData LegsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimCutsceneData CutsceneData;
    
    UPROPERTY(Transient)
    UAnimSequenceBase* LastGestureAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimAbilityData AbilityData;
    
public:
    UAnimInstanceHuman();

};

