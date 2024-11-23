#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "TaskMenuWidget.generated.h"

class UTaskIcon;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UTaskMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTaskIcon* TaskIcon;
    
    UPROPERTY(Instanced)
    UTextWidget* TaskText;
    
    UPROPERTY(EditDefaultsOnly)
    FString OptionalPostfixSID;
    
public:
    UTaskMenuWidget();

};

