#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ViewBaseExtended.h"
#include "SaveLoadNotificationView.generated.h"

class UOverlay;
class USaveLoadNotificationBase;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API USaveLoadNotificationView : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UOverlay* SaveLoadNotificationOverlay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SaveLoadNotificationViewZOrder;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FMargin DefaultNotifyPadding;
    
    UPROPERTY(Instanced, Transient)
    USaveLoadNotificationBase* ActiveSaveLoadNotificationWidget;
    
public:
    USaveLoadNotificationView();

};

