#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UObject/Object.h"
#include "PlaySoundQuestNodeListener.generated.h"

class UAkCallbackInfo;

UCLASS()
class STALKER2_API UPlaySoundQuestNodeListener : public UObject {
    GENERATED_BODY()
public:
    UPlaySoundQuestNodeListener();

    UFUNCTION()
    void OnSoundFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

