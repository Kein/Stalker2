#pragma once
#include "CoreMinimal.h"
#include "AnimAbilityData.h"
#include "AnimHitData.h"
#include "AnimInstanceBase.h"
#include "AnimMutantCollectionsData.h"
#include "AnimMutantStateData.h"
#include "AnimPhysicalData.h"
#include "AnimPoseSearchLocomotionData.h"
#include "LookAtMutantData.h"
#include "TwoLegIKData.h"
#include "AnimInstanceMutant.generated.h"

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceMutant : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimMutantStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimMutantCollectionsData CollectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPhysicalData PhysicalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTwoLegIKData LegsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLookAtMutantData LookAtData;
    
public:
    UAnimInstanceMutant();

};

