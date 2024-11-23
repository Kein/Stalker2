#pragma once
#include "CoreMinimal.h"
#include "PopupBase.h"
#include "ControlSettingsPopup.generated.h"

class URichTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UControlSettingsPopup : public UPopupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    URichTextBlock* DescriptionLegendText;
    
    UPROPERTY(EditDefaultsOnly)
    FString DescriptionSID;
    
    UPROPERTY(EditDefaultsOnly)
    FName ActionTextStyleID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 KeyImageIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TextImageIndex;
    
public:
    UControlSettingsPopup();

};

