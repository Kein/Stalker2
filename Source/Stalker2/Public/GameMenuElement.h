#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "GameMenuElement.generated.h"

class UButton;
class UTextWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UGameMenuElement : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText LocName;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* SelectedAnim;
    
    UPROPERTY(Instanced)
    UButton* Button;
    
    UPROPERTY(Instanced)
    UTextWidget* Caption;
    
    UGameMenuElement();

    UFUNCTION()
    void Confirm();
    
};

