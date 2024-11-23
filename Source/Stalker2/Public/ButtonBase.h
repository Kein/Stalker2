#pragma once
#include "CoreMinimal.h"
#include "OnS2ButtonClickedDelegate.h"
#include "WidgetBase.h"
#include "ButtonBase.generated.h"

class UButton;

UCLASS(EditInlineNew)
class STALKER2_API UButtonBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnS2ButtonClicked OnButtonClicked;
    
    UPROPERTY(Instanced)
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ButtonId;
    
    UButtonBase();

protected:
    UFUNCTION()
    void ButtonReleased();
    
    UFUNCTION()
    void ButtonPressed();
    
    UFUNCTION()
    void ButtonClicked();
    
};

