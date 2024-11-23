#pragma once
#include "CoreMinimal.h"
#include "EDpadNavigation.h"
#include "WidgetBase.h"
#include "DPADSelection.generated.h"

class UImageWidget;
class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UDPADSelection : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USizeBox* SizeContainer;
    
    UPROPERTY(EditAnywhere)
    EDpadNavigation DpadNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DPadStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldLoadWidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImageWidget* Dpad_Active;
    
    UDPADSelection();

};

