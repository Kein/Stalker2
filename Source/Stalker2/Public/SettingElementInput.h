#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.h"
#include "SettingElement.h"
#include "SettingElementInput.generated.h"

class UHintImageKeyboard;

UCLASS(EditInlineNew)
class STALKER2_API USettingElementInput : public USettingElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UHintImageKeyboard* LeftHintImage;
    
    UPROPERTY(Instanced)
    UHintImageKeyboard* RightHintImage;
    
    UPROPERTY(EditInstanceOnly)
    EMappingContext MappingContext;
    
    UPROPERTY(EditDefaultsOnly)
    FString PopupDescription;
    
    UPROPERTY(EditDefaultsOnly)
    FString PopupTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FString PopupApplyHintSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString PopupCancelHintSID;
    
public:
    USettingElementInput();

};

