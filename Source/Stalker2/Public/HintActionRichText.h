#pragma once
#include "CoreMinimal.h"
#include "CommonHint.h"
#include "HintActionRichText.generated.h"

class UHorizontalBox;

UCLASS(EditInlineNew)
class STALKER2_API UHintActionRichText : public UCommonHint {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UHorizontalBox* HorizontalBox;
    
private:
    UPROPERTY(EditInstanceOnly)
    bool bEnableHintLock;
    
public:
    UHintActionRichText();

};

