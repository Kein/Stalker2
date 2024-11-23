#pragma once
#include "CoreMinimal.h"
#include "ViewBase.h"
#include "DebugHUDView.generated.h"

class UHorizontalBox;
class UStatPanelDebug;
class UTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UDebugHUDView : public UViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextBlock* HourText;
    
    UPROPERTY(Instanced)
    UTextBlock* MinutesText;
    
    UPROPERTY(Instanced)
    UTextBlock* DataText;
    
    UPROPERTY(Instanced)
    UHorizontalBox* MiniMapPanel;
    
    UPROPERTY(Instanced)
    UHorizontalBox* DataTimePanel;
    
    UPROPERTY(Instanced)
    UStatPanelDebug* StatPanelDebug;
    
    UDebugHUDView();

};

