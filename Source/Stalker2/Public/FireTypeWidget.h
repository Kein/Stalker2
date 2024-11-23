#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "FireTypeWidget.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UFireTypeWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UImage* Icon;
    
    UPROPERTY(EditDefaultsOnly)
    float FadedOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float SelectedOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeSpeed;
    
    UFireTypeWidget();

};

