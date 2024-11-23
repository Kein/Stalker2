#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "LocalizationWidget.generated.h"

class UCommonTextBlock;
class URichTextBlock;
class UTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API ULocalizationWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableLocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LocalizationSID;
    
private:
    UPROPERTY(Instanced, Transient)
    URichTextBlock* RichTextBlockObj;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlockObj;
    
    UPROPERTY(Instanced, Transient)
    UCommonTextBlock* CommonTextBlockObj;
    
public:
    ULocalizationWidget();

};

