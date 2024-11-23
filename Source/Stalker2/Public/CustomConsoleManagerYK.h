#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerYK.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerYK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerYK();

    UFUNCTION(Exec)
    void XTestSetDiscount(const bool InbDiscount);
    
    UFUNCTION(Exec)
    void XBlockItemSelectorSlots(const bool InBlock) const;
    
    UFUNCTION(Exec)
    void XBlockItemSelectorSlot(const bool InBlock, const int32 InSlotNum) const;
    
};

