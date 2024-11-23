#pragma once
#include "CoreMinimal.h"
#include "OnHoverIndicatorDelegate.h"
#include "WidgetBase.h"
#include "HoverIndicator.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UHoverIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(BlueprintAssignable)
    FOnHoverIndicator OnHoverIndicator;
    
    UHoverIndicator();

};

