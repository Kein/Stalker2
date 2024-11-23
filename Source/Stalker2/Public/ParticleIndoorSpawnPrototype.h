#pragma once
#include "CoreMinimal.h"
#include "EAudioRoomPresetBandwidth.h"
#include "EAudioRoomPresetBase.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticleIndoorSpawnPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleIndoorSpawnPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EAudioRoomPresetBase> IgnoredAudioRoomPresets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EAudioRoomPresetBandwidth> ForbiddenBandwidthTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistanceToAudioVolume;
    
    FParticleIndoorSpawnPrototype();
};

