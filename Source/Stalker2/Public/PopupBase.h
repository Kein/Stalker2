#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PopupBase.generated.h"

class UHintInputController;
class UHorizontalBox;
class UHyperlinkButton;
class UImage;
class UTextWidget;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UPopupBase : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* Title;
    
    UPROPERTY(Instanced)
    UTextWidget* Description;
    
    UPROPERTY(Instanced)
    UHintInputController* ConfirmHint;
    
    UPROPERTY(Instanced)
    UHintInputController* DiscardHint;
    
    UPROPERTY(Instanced)
    UHintInputController* RetryHint;
    
    UPROPERTY(Instanced)
    UHintInputController* CancelHint;
    
    UPROPERTY(Instanced)
    UHorizontalBox* NoIconHorizontalBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* IconHorizontalBox;
    
    UPROPERTY(Instanced, Transient)
    UImage* Icon;
    
    UPROPERTY(Instanced)
    UHyperlinkButton* PrivacyPolicyButton;
    
    UPROPERTY(Instanced)
    UHyperlinkButton* TermsOfUseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SaveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* BrokenIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* AttentionIcon;
    
public:
    UPopupBase();

};

