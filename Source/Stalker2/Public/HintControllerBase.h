#pragma once
#include "CoreMinimal.h"
#include "HintControllerSettings.h"
#include "HintStyleSettings.h"
#include "WidgetBase.h"
#include "HintControllerBase.generated.h"

class UPlatformSwitcherBase;
class USpacer;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UHintControllerBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool bInitializeAutomatically;
    
    UPROPERTY(EditInstanceOnly)
    FHintControllerSettings ControllerSettings;
    
    UPROPERTY(EditInstanceOnly)
    FHintStyleSettings StyleSettings;
    
protected:
    UPROPERTY(Instanced)
    UPlatformSwitcherBase* PlatformSwitcher;
    
    UPROPERTY(Instanced)
    UTextWidget* LeftText;
    
    UPROPERTY(Instanced)
    USpacer* LeftGap;
    
    UPROPERTY(Instanced)
    UTextWidget* RightText;
    
    UPROPERTY(Instanced)
    USpacer* RightGap;
    
public:
    UHintControllerBase();

};

