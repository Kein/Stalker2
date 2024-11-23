#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomGridSlot.h"
#include "TraderGridSlot.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UTraderGridSlot : public UCustomGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor CantBuyHighlight;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DefaultHighlightColor;
    
public:
    UTraderGridSlot();

};

