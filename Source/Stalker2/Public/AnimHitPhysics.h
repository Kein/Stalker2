#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlLimbData.h"
// FIXME
//#include "PhysicsControlNames.h"
#include "AnimBonesArray.h"
#include "AnimHitPhysCurves.h"
#include "AnimPhysicSpaceControl.h"
#include "EAnimConstraintProfile.h"
#include "EDamageSource.h"
#include "AnimHitPhysics.generated.h"

class UPhysicsControlComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHitPhysics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPhysicsControlComponent* Control;
    
    // FIXME
	// PhysicsControlLimbData.h renamed `FPhysicsControlNameArray`
    // UPROPERTY(BlueprintReadOnly)
    // FPhysicsControlNames AllBodyModifiers;
    
    //UPROPERTY(BlueprintReadOnly)
    //TMap<FName, FPhysicsControlNames> LimbBodyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimConstraintProfile HitConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPhysicSpaceControl WorldSpaceControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPhysicSpaceControl ParentSpaceControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPhysicsControlLimbSetupData> LimbSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FAnimHitPhysCurves> HitCurvesForLimbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DeadHitStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EDamageSource, float> DeathDamageSourceImpulses;
    
    // FIXME make FAnimBonesArray blueprintype
    //UPROPERTY(BlueprintReadOnly, EditAnywhere)
    //TMap<FName, FAnimBonesArray> SetsOfBoneModifiersArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> BodyModifierForKinematicMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableAllControlsOnHit;
    
    FAnimHitPhysics();
};

