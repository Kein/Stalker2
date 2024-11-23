#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerSS.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerSS : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerSS();

    UFUNCTION(Exec)
    void XALifeKillAll() const;
    
    UFUNCTION(Exec)
    void XALifeEnable() const;
    
    UFUNCTION(Exec)
    void XALifeDisable() const;
    
};

