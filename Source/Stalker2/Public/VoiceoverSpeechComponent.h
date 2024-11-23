#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "SpeechComponent.h"
#include "VoiceoverSpeechComponent.generated.h"

class UAkCallbackInfo;
class UAkComponent;

UCLASS()
class UVoiceoverSpeechComponent : public USpeechComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UAkComponent* AkVoiceoverSpeakerComponent;
    
public:
    UVoiceoverSpeechComponent();

private:
    UFUNCTION()
    void OnAKEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

