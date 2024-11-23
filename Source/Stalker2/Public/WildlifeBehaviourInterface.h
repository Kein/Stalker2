#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WildlifeBehaviourInterface.generated.h"

UINTERFACE(Blueprintable)
class UWildlifeBehaviourInterface : public UInterface {
    GENERATED_BODY()
};

class IWildlifeBehaviourInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmissionWeatherStarted();
    
};

