#pragma once
#include "CoreMinimal.h"
#include "ViewBase.h"
#include "FadeoutScreen.generated.h"

class UImage;
class USizeBox;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UFadeoutScreen : public UViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* SpeakerNameText;
    
    UPROPERTY(Instanced)
    UTextWidget* SubtitleText;
    
    UPROPERTY(Instanced)
    USizeBox* SpeakerNameContainer;
    
    UPROPERTY(Instanced)
    UImage* FadeoutImage;
    
    UFadeoutScreen();

protected:
    UFUNCTION()
    void UISkipFadeoutScreen();
    
};

