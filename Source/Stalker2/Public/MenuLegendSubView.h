#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "MenuLegendSubView.generated.h"

class UHintControllerBase;
class UHorizontalBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMenuLegendSubView : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UHorizontalBox* LegendSubViewPanel;
    
    UPROPERTY(Instanced)
    UHorizontalBox* LegendButtonPanelOne;
    
    UPROPERTY(Instanced)
    UHorizontalBox* LegendButtonPanelTwo;
    
    UPROPERTY(EditDefaultsOnly)
    float SpaceBetweenHints;
    
    UPROPERTY(Instanced, Transient)
    TArray<UHintControllerBase*> LegendSubViewWidgets;
    
    UPROPERTY(Instanced, Transient)
    TArray<UHintControllerBase*> LegendButtonWidgets;
    
public:
    UMenuLegendSubView();

};

