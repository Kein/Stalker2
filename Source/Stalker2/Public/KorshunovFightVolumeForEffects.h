#pragma once
#include "CoreMinimal.h"
#include "VolumeForEffects.h"
#include "KorshunovFightVolumeForEffects.generated.h"

class UAkAudioEvent;
class UNiagaraComponent;

UCLASS()
class STALKER2_API AKorshunovFightVolumeForEffects : public AVolumeForEffects {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float ActiveTime;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> VolumeSFX;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraComponent* VolumeVFX;
    
public:
    AKorshunovFightVolumeForEffects(const FObjectInitializer& ObjectInitializer);

};

