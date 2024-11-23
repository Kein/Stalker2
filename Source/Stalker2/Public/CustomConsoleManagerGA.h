#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerGA.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerGA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerGA();

    UFUNCTION(Exec)
    void XToggleAnalyticsTracking_Player(const bool bTracking) const;
    
    UFUNCTION(Exec)
    void XShowAnalyticsUserId() const;
    
};

