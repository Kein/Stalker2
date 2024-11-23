#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "UObject/Object.h"
#include "OnAKEventFinished_Proxy.generated.h"

class UAkCallbackInfo;

UCLASS()
class UOnAKEventFinished_Proxy : public UObject {
    GENERATED_BODY()
public:
    UOnAKEventFinished_Proxy();

    UFUNCTION()
    void OnSoundFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

