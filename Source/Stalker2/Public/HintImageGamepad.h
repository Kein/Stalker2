#pragma once
#include "CoreMinimal.h"
#include "HintImageBase.h"
#include "HintImageGamepad.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UHintImageGamepad : public UHintImageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* HintImage;
    
public:
    UHintImageGamepad();

};

