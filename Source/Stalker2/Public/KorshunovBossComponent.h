#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossInterface.h"
#include "CustomDamageHandleComponent.h"
#include "OnCoilsDamageThresholdPassedDelegate.h"
#include "OnCoilsHeatedDelegate.h"
#include "OnCoilsStateChangedDelegate.h"
#include "OnShieldStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "KorshunovBossComponent.generated.h"

class ATelekineticShield;
class UMaterialInstance;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UKorshunovBossComponent : public UActorComponent, public ICustomDamageHandleComponent, public IBossInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnShieldStateChanged OnShieldStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoilsStateChanged OnCoilsStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoilsHeated OnCoilsHeated;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoilsDamageThresholdPassed OnCoilsDamageThresholdPassed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<float> PhasesHealthThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MeleeResistancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float JumpZScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CutsceneSequenceTrackingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ShieldArmorHealth;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CoilsHeatingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInstance* CoilsMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATelekineticShield> TelekineticShieldType;
    
public:
    UKorshunovBossComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

