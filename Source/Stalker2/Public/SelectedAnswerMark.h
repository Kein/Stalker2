#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SelectedAnswerMark.generated.h"

class UImage;
class UOverlay;
class UUserWidget;

UCLASS(EditInlineNew)
class STALKER2_API USelectedAnswerMark : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UUserWidget* Hint;
    
    UPROPERTY(Instanced)
    UImage* LockSwitcher;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UOverlay* TimerContainer;
    
    USelectedAnswerMark();

};

