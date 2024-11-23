#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "NicknameWidget.generated.h"

class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UNicknameWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* Greeting;
    
    UPROPERTY(Instanced)
    UTextWidget* Nickname;
    
public:
    UNicknameWidget();

};

