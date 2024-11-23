#pragma once
#include "CoreMinimal.h"
#include "BookViewBase.h"
#include "PDAView.generated.h"

class UOverlay;
class UPDARegionPanel;
class UPDATimePanel;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UPDAView : public UBookViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UOverlay* Container;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPDATimePanel* TimeWidget;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPDARegionPanel* RegionWidget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* PDAFadeOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* PDAFadeInAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSholdShowInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PDATurnOnTimer;
    
    UPDAView();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateQuestList();
    
    UFUNCTION()
    void HideAllWindows();
    
    UFUNCTION()
    void CloseUpdateView();
    
};

