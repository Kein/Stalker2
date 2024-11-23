#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/ActorDataLayer.h"
#include "Engine/HitResult.h"
#include "GameFramework/Volume.h"
#include "EOverrideLifeGridVisionRadius.h"
#include "GridInfo.h"
#include "StreamingDistanceOverridingVolume.generated.h"

class AActor;
class AStreamingDistanceOverridingVolume;
class AStreamingGatewayVolume;
class UDataLayerInstance;
class UPrimitiveComponent;

UCLASS()
class STALKER2_API AStreamingDistanceOverridingVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    AStreamingDistanceOverridingVolume* MainVolume;
    
    UPROPERTY(EditAnywhere)
    EOverrideLifeGridVisionRadius OverrideLifeGridVisionRadiusPC;
    
    UPROPERTY(EditAnywhere)
    EOverrideLifeGridVisionRadius OverrideLifeGridVisionRadiusXBox;
    
    UPROPERTY(EditAnywhere)
    TSet<FGridInfo> OverridingStreamingGridsInfosPC;
    
    UPROPERTY(EditAnywhere)
    TSet<FGridInfo> OverridingStreamingGridsInfosXBox;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> EnabledDataLayers;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> DisabledDataLayers;
    
    UPROPERTY(EditInstanceOnly)
    TSet<FActorDataLayer> EnabledDynamicDataLayers;
    
    UPROPERTY(EditInstanceOnly)
    TSet<FActorDataLayer> DisabledDynamicDataLayers;
    
    UPROPERTY(EditInstanceOnly)
    TSet<AStreamingGatewayVolume*> EntryTriggers;
    
    UPROPERTY(EditInstanceOnly)
    TSet<AStreamingGatewayVolume*> ExitTriggers;
    
    UPROPERTY(EditAnywhere)
    double OverridingTime;
    
    UPROPERTY(EditAnywhere)
    int32 VolumePriority;
    
    UPROPERTY()
    TSet<UDataLayerInstance*> OverridedDataLayerInstances;
    
    UPROPERTY()
    float FallbackStreamingBlockRestoreRate;
    
    UPROPERTY(EditAnywhere)
    float OverridingDistantTreeCullDistanceScale;
    
public:
    AStreamingDistanceOverridingVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateStreamingConfiguration();
    
    UFUNCTION()
    void OnTriggerOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};

