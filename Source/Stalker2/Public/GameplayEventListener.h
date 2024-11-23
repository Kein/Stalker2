#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayEventListener.generated.h"

class UGameplayEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class UGameplayEventListener : public UInterface {
    GENERATED_BODY()
};

class IGameplayEventListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameplayEvent(const FGameplayTag& EventTag, const UGameplayEventData* EventData);
    
};

