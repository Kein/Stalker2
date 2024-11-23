#pragma once
#include "CoreMinimal.h"
#include "StackSplitContextual.h"
#include "StackSplitContexualTrade.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UStackSplitContexualTrade : public UStackSplitContextual {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString SellLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString SellAllLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString BuyLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString BuyAllLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString ReturnLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString ReturnAllLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString SellTitleLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString BuyTitleLocSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString ReturnTitleLocSID;
    
    UStackSplitContexualTrade();

};

