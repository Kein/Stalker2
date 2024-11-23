#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ScenarioManager.generated.h"

class UPlaySoundQuestNodeListener;

UCLASS()
class STALKER2_API UScenarioManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UPlaySoundQuestNodeListener*> PlaySoundQuestNodeListeners;
    
public:
    UScenarioManager();

};

