#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "EAkCurveInterpolation.h"
#include "Engine/EngineTypes.h"
#include "EAudioRoomPresetBandwidth.h"
#include "EAudioRoomPresetBase.h"
#include "GSCAudioVolume.generated.h"

class UAkAudioEvent;
class UAudioRoomBakedReflectionComponent;
class UAudioRoomBandwidthComponent;
class UTextRenderComponent;

UCLASS()
class STALKER2_API AGSCAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAudioRoomBakedReflectionComponent* BakedReflection;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAudioRoomBandwidthComponent* Bandwidth;
    
    UPROPERTY(EditAnywhere)
    int32 FadeTransitionDuration;
    
    UPROPERTY(EditAnywhere)
    EAkCurveInterpolation FadeCurveType;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCrowdedAmbient;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* CrowdedAmbientAudioEvent;
    
private:
    UPROPERTY(EditAnywhere)
    EAudioRoomPresetBase AudioRoomPresetBase;
    
    UPROPERTY(EditAnywhere)
    EAudioRoomPresetBandwidth AudioRoomPresetBandwidth;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> AudioVolumeCollisionChannel;
    
    UPROPERTY(Instanced, Transient)
    UTextRenderComponent* InfoTextRenderComponent;
    
    UPROPERTY(EditAnywhere)
    float BlendRadius;
    
    UPROPERTY(EditAnywhere)
    float BlendWeight;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    bool bOverride_LumenSkylightLeaking;
    
    UPROPERTY(EditAnywhere)
    float SkyLightLeakingAmount;
    
public:
    AGSCAudioVolume(const FObjectInitializer& ObjectInitializer);

};

