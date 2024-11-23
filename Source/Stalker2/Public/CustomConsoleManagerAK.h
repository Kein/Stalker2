#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAK.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerAK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAK();

private:
    UFUNCTION(Exec)
    void XToggleAutoSaveEachFrame();
    
    UFUNCTION(Exec)
    void XTestST162667() const;
    
    UFUNCTION(Exec)
    void XTestDangling() const;
    
    UFUNCTION(Exec)
    void XSuicide() const;
    
    UFUNCTION(Exec)
    void XSaveObjListToFile();
    
    UFUNCTION(Exec)
    void XPrintModelCapacity();
    
    UFUNCTION(Exec)
    void XPrintInventory(int32 UnitUID) const;
    
    UFUNCTION(Exec)
    void XKillThemAll() const;
    
};

