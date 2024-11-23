#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerPS.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerPS : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerPS();

    UFUNCTION(Exec)
    void XShowInventoryDebugItmesStats(const bool bShow) const;
    
    UFUNCTION(Exec)
    void XChangeInventoryScroll(int32 Index) const;
    
    UFUNCTION(Exec)
    void XChangeCompasMarkers(int32 Index) const;
    
};

