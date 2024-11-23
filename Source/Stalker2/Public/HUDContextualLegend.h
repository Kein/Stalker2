#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "HUDContextualLegend.generated.h"

class URichTextBlock;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UHUDContextualLegend : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    URichTextBlock* LegendText;
    
    UPROPERTY(EditDefaultsOnly)
    FString DropDeadBodyHintSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString GuitarPCAHintSID;
    
public:
    UHUDContextualLegend();

};

