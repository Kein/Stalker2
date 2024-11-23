#pragma once
#include "CoreMinimal.h"
#include "EAnimGuitarState.h"
#include "PlayerGuitarAnimations.generated.h"

class UAkAudioEvent;
class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerGuitarAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* ChordTransition;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* GuitarItemEnterAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* GuitarItemExitAnimation;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimGuitarState, UAkAudioEvent*> StrumUpSounds;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimGuitarState, UAkAudioEvent*> StrumDownSounds;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimGuitarState, UAkAudioEvent*> GlissSounds;
    
    STALKER2_API FPlayerGuitarAnimations();
};

