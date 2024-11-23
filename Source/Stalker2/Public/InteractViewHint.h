#pragma once
#include "CoreMinimal.h"
#include "CommonHint.h"
#include "InteractViewHint.generated.h"

class UImageWidget;
class UTextWidget;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UInteractViewHint : public UCommonHint {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* TitleText;
    
    UPROPERTY(Instanced)
    UTextWidget* InteractText;
    
    UPROPERTY(Instanced)
    UTextWidget* InteractTextSmall;
    
    UPROPERTY(Instanced)
    UVerticalBox* HintsContainer;
    
    UPROPERTY(Instanced)
    UImageWidget* IconUpgrade;
    
    UPROPERTY(Instanced)
    UImageWidget* IconOverweight;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* RunActionAnim;
    
    UInteractViewHint();

    UFUNCTION()
    void OnRunAction();
    
};

