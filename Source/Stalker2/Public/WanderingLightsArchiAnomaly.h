#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "Engine/Scene.h"
#include "Curves/CurveFloat.h"
#include "EWanderingLightsSimulationState.h"
#include "MaterialScalarDrivingProperties.h"
#include "PrototypeSID.h"
#include "WLCylinderShapeParams.h"
#include "WLParticlesPropertyState.h"
#include "WanderingLightInstanceData.h"
#include "WanderingLightsArchiAnomaly.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UBoxComponent;
class UNiagaraSystem;

UCLASS()
class STALKER2_API AWanderingLightsArchiAnomaly : public AActor, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ArtifactModelSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerMaxVisibilityDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPlayerViewFOVOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerViewFOVDeg;
    
    UPROPERTY(EditAnywhere)
    TArray<FRuntimeFloatCurve> PlayerFlashlightIntensityScaleCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnomalyStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnomalyEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstanceVisibilityRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstanceVisibilityChangeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstanceChemicalDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstanceChemicalDamagePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScaleChemicalDamageFromPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstanceOpacityChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRandomizeInstanceSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomizedSpawnTimeOffsetMax;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve InstanceVerticalMovementCurve;
    
    UPROPERTY(EditAnywhere)
    bool bSkipMovementDuringWakeUp;
    
    UPROPERTY(EditAnywhere)
    bool bSkipMovementDuringShutDown;
    
    UPROPERTY(EditAnywhere)
    float InstanceSpawnTime;
    
    UPROPERTY(EditAnywhere)
    float InstanceBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoUpdateInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StretchBoundsWithInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowVFXInEditMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AnomalyBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoundsMargin;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> IdleEffect;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> InteractEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<FWLParticlesPropertyState> IdleStateVFXParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FWLParticlesPropertyState> TargetedStateVFXParameters;
    
    UPROPERTY(EditAnywhere)
    float TargetedStateVFXParametersDelay;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialScalarDrivingProperties> MaterialCollectionsToDrive;
    
    UPROPERTY(EditAnywhere)
    float PostProcessBlendRadius;
    
    UPROPERTY(EditAnywhere)
    float PostProcessPriority;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(EditAnywhere)
    TMap<EWanderingLightsSimulationState, UAkAudioEvent*> StateSFXEvents;
    
    UPROPERTY(EditAnywhere)
    TMap<EWanderingLightsSimulationState, UAkSwitchValue*> StateSFXSwitches;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FWanderingLightInstanceData> AnomalyInstances;
    
    UPROPERTY(EditAnywhere)
    FPrototypeSID PlayerPSYEffectInsideAnomalyBounds;
    
private:
    UPROPERTY(Instanced)
    UBoxComponent* BoxComponent;
    
    UPROPERTY()
    FWLCylinderShapeParams CylinderShapeParams;
    
    UPROPERTY()
    TArray<FVector> ArtifactSpawnLocations;
    
public:
    AWanderingLightsArchiAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void CreateVFX(bool bEnable);
    

    //~ Begin IInterface_PostProcessVolume Interface
	virtual bool EncompassesPoint(FVector Point, float SphereRadius/*=0.f*/, float* OutDistanceToPoint) override { return true; };
	virtual FPostProcessVolumeProperties GetProperties() const override
	{
		FPostProcessVolumeProperties Ret;
		return Ret;
	}
	#if DEBUG_POST_PROCESS_VOLUME_ENABLE
		virtual FString GetDebugName() const override
		{
			return GetName();
		}
	#endif
	//~ End IInterface_PostProcessVolume Interface
};

