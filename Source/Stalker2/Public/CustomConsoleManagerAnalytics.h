#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAnalytics.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerAnalytics : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAnalytics();

    UFUNCTION(Exec)
    void XAnalyticsPrintLocalTotals();
    
    UFUNCTION(Exec)
    void XAnalyticsPrintLocalKills();
    
    UFUNCTION(Exec)
    void XAnalyticsPrintGlobalTotals();
    
    UFUNCTION(Exec)
    void XAnalyticsPrintGlobalKills();
    
    UFUNCTION(Exec)
    void XAnalyticsPrintDeaths();
    
};

