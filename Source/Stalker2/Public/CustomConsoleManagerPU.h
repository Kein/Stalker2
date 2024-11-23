#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerPU.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerPU : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerPU();

    UFUNCTION(Exec)
    void XStopProcPopup();
    
    UFUNCTION(Exec)
    void XStartProcPopup();
    
    UFUNCTION(Exec)
    void XShowPopup(const int32 ButtonsNum);
    
    UFUNCTION(Exec)
    void XShowDemoPopup();
    
};

