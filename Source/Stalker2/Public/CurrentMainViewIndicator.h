#pragma once
#include "CoreMinimal.h"
#include "TextSettings.h"
#include "WidgetBase.h"
#include "CurrentMainViewIndicator.generated.h"

class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UCurrentMainViewIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FTextSettings TextSettings;
    
    UPROPERTY(Instanced)
    UTextWidget* MainViewText;
    
    UPROPERTY(EditDefaultsOnly)
    FString MainMenuSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString PauseMenuSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString GameOverMenuSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString UndefinedMenuSID;
    
public:
    UCurrentMainViewIndicator();

};

