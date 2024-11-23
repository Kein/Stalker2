#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "EULAView.generated.h"

class UModifiableRichText;
class UScrollBox;
class USettingElementSwitcher;
class UTextWidget;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UEULAView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* EULATitle;
    
    UPROPERTY(Instanced)
    UVerticalBox* TextVerticalBox;
    
    UPROPERTY(Instanced)
    UScrollBox* EULAScrollBox;
    
    UPROPERTY(Instanced)
    UModifiableRichText* EULAMainText;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* SendAnalyticsDataSwitcher;
    
    UEULAView();

protected:
    UFUNCTION()
    void TurnSendAnalyticsOn();
    
    UFUNCTION()
    void TurnSendAnalyticsOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowAcceptButtonBP();
    
    UFUNCTION()
    void ScrollUp();
    
    UFUNCTION()
    void ScrollDown();
    
    UFUNCTION()
    void OnUserScrolled(float Offset);
    
    UFUNCTION()
    void Decline();
    
    UFUNCTION()
    void Accept();
    
};

