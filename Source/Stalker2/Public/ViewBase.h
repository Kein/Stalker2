#pragma once
#include "CoreMinimal.h"
#include "EWidgetNameEx.h"
#include "ViewOpenSettings.h"
#include "WidgetBase.h"
#include "ViewBase.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UViewBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FViewOpenSettings ViewOpenSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWidgetNameEx WidgetName;
    
    UViewBase();

protected:
    UFUNCTION()
    void UIClose();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void PreCloseUpdateView();
    
};

