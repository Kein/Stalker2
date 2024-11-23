#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EffectPrototypeSID.h"
#include "PrototypeSID.h"
#include "UIDActor_VortexArchAnomaly.h"
#include "VortexSplineDataPoint.h"
#include "VortexAnomaly.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UMaterialParameterCollection;
class UPrimitiveComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AVortexAnomaly : public AUIDActor_VortexArchAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* VortexDistanceRTPC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinPlayerDistanceToUpdateSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVortexSplineDataPoint> VortexMovementData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* RootMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* VortexCollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* VortexSafeZoneComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexCollisionRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexSafeZoneRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEffectPrototypeSID> ObjectCollisionEffects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatInterval AllowedThrowAngleInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThrowInvulnerabilityDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexOuterImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexOuterLiftHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexOuterLiftHorizontalSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexOuterLiftVerticalSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexOuterLiftMaxDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexInnerImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexInnerLiftHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexInnerLiftHorizontalSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexInnerLiftVerticalSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexInnerLiftMaxDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexSafeZoneLeaveTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEffectPrototypeSID> SafeZoneLeaveEffects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID ArtifactSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArtifactHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnArtifactOnEmissionOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DudeSpawnDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DudeSpawnHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DudeTimeToReachPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DudeTargetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexToPlayerDistForDudeSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VortexToPlayerDistCheckFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID SpawnedObjSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID SpawnedCorpseSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* DudeAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGuid WeatherSelectionVolumeGuid;
    
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* IndoorMPC;
    
    UPROPERTY(VisibleAnywhere)
    FGuid Guid;
    
public:
    AVortexAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnVortexSafeZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnVortexSafeZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnVortexEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnVortexBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};

