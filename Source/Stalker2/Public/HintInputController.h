#pragma once
#include "CoreMinimal.h"
#include "HintControllerBase.h"
#include "HintInputController.generated.h"

class UActionMimicButton;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UHintInputController : public UHintControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UActionMimicButton* MimicButtonElement;
    
    UPROPERTY(EditInstanceOnly)
    bool bHandleMouseInput;
    
public:
    UHintInputController();

};

