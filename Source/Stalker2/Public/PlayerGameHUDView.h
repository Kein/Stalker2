#pragma once
#include "CoreMinimal.h"
#include "ViewBase.h"
#include "PlayerGameHUDView.generated.h"

class UAmmoWidget;
class UBackgroundBlur;
class UCompassWidget;
class UCrosshairWidgetSwitcher;
class UHUDContextualLegend;
class UHintAction;
class UHudHintsPanel;
class UNotificationWidget;
class UOverlay;
class UQuickPanel;
class UStatPanel;
class USystemNotificationWidget;
class UThreatIndicator;
class UUserWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UPlayerGameHUDView : public UViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHUDContextualLegend* ContextualLegend;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UQuickPanel* QuickPanel;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHudHintsPanel* HudHintsPanel;
    
    UPROPERTY(Instanced)
    USystemNotificationWidget* SystemNotification;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UOverlay* Container;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCompassWidget* CompassWidget;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UAmmoWidget* AmmoPanel;
    
    UPROPERTY(Instanced)
    UHintAction* HoldBreathHint;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCrosshairWidgetSwitcher* Crosshair;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UStatPanel* StatPanel;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UUserWidget* Background;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UNotificationWidget* NotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UThreatIndicator* ThreatIndicator;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBackgroundBlur* InventoryBlur;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ItemSelectorHudModeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemSelectorHUDMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemSelectorHUDModSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableAutoHideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeUpdateHideWidgetsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeUpdateHideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableTurnAngleAutoHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerTurnAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApproximationPlayerLocation;
    
public:
    UPlayerGameHUDView();

};

