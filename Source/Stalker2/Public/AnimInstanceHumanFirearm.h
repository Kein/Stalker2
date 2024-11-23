#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimHumanAimingData.h"
#include "AnimHumanWeaponConfig.h"
#include "AnimInstanceBase.h"
#include "AnimPoseSearchLocomotionData.h"
#include "ESmartCoverType.h"
#include "AnimInstanceHumanFirearm.generated.h"

class UHumanFirearmAnimCollection;

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceHumanFirearm : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UHumanFirearmAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath WeaponAnimCollectionAsset;
    
    UPROPERTY(Transient)
    UHumanFirearmAnimCollection* ZombieWeaponAnimCollection;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath ZombieWeaponAnimCollectionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanWeaponConfig WeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanWeaponConfig RelaxedWeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimHumanAimingData AimingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsZombie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsingSmartCoverAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESmartCoverType SmartCoverType;
    
public:
    UAnimInstanceHumanFirearm();

};

