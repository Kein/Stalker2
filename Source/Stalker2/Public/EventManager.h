#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "EventManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UEventManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UEventManager();

};

