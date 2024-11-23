#pragma once
#include "CoreMinimal.h"
#include "LocalizationWidget.h"
#include "SlotScaleSettings.h"
#include "TextSettings.h"
#include "TextWidget.generated.h"

class UCommonTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UTextWidget : public ULocalizationWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultWrapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseWrappingFromStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextSettings TextSettings;
    
    UPROPERTY(EditAnywhere)
    bool bEnableScroll;
    
    UPROPERTY(Instanced)
    UCommonTextBlock* CommonTextObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlotScaleSettings TextScaleSettings;
    
    UTextWidget();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintPure)
    FText GetText();
    
};

