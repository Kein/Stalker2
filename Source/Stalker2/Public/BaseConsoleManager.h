#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "BaseConsoleManager.generated.h"

UCLASS(Abstract)
class UBaseConsoleManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UBaseConsoleManager();

};

