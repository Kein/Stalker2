#pragma once
#include "CoreMinimal.h"
#include "MenuMainViewBase.h"
#include "DeathScreen.generated.h"

class UDeathCounter;
class UImage;
class UOverlay;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UDeathScreen : public UMenuMainViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* BlackBackground;
    
    UPROPERTY(Instanced)
    UOverlay* DeathScreenOverlay;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UTextWidget* DeadByText;
    
    UPROPERTY(Instanced)
    UDeathCounter* DeathCounterWidget;
    
public:
    UDeathScreen();

};

