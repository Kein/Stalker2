#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "ERank.h"
#include "CustomConsoleManagerIK.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerIK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerIK();

    UFUNCTION(Exec)
    void XSwitchPlayerRank(const ERank Rank) const;
    
    UFUNCTION(Exec)
    void XSkipTimeHours(const uint32 Hours) const;
    
    UFUNCTION(Exec)
    void XSignalStrengthTest() const;
    
    UFUNCTION(Exec)
    void XSetTwelveHourTime(const bool bSet) const;
    
    UFUNCTION(Exec)
    void XInputActionUnlock(const FString& IAName, const FString& IMCName) const;
    
    UFUNCTION(Exec)
    void XInputActionBlock(const FString& IAName, const FString& IMCName) const;
    
    UFUNCTION(Exec)
    void XBluePrintSearch() const;
    
};

