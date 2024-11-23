#pragma once
#include "CoreMinimal.h"
#include "ButtonBase.h"
#include "HyperlinkButton.generated.h"

class UImage;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UHyperlinkButton : public UButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* Text;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Underline;
    
    UPROPERTY(EditAnywhere)
    FString URL;
    
    UPROPERTY(EditAnywhere)
    FText DefaultText;
    
    UPROPERTY(EditAnywhere)
    bool bEnableLocalization;
    
    UPROPERTY(EditAnywhere)
    FString LocalizationSID;
    
    UPROPERTY(EditAnywhere)
    FName SetStyleIdHover;
    
    UPROPERTY(EditAnywhere)
    FName SetStyleIdUnHover;
    
public:
    UHyperlinkButton();

};

