#pragma once
#include "CoreMinimal.h"
#include "HintImageBase.h"
#include "HintImageKeyboard.generated.h"

class UImage;
class URichTextBlock;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UHintImageKeyboard : public UHintImageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* HintImage;
    
    UPROPERTY(Instanced)
    UImage* HintBackground;
    
    UPROPERTY(Instanced)
    URichTextBlock* HintChar;
    
    UPROPERTY(EditDefaultsOnly)
    FString KeyboardCharStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FName BackgroundName;
    
public:
    UHintImageKeyboard();

};

