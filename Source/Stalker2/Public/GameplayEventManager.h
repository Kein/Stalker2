#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "GameplayEventManager.generated.h"

class UGameplayEventData;

UCLASS()
class STALKER2_API UGameplayEventManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UClass*, UGameplayEventData*> EventDataPool;
    
public:
    UGameplayEventManager();

};

