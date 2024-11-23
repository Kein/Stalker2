#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerEG.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerEG : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerEG();

    UFUNCTION(Exec)
    void XGarbageCollector() const;
    
};

