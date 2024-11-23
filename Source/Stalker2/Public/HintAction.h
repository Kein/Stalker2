#pragma once
#include "CoreMinimal.h"
#include "CommonHint.h"
#include "HintAction.generated.h"

class UButton;

UCLASS(EditInlineNew)
class STALKER2_API UHintAction : public UCommonHint {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UButton* HintButton;
    
    UHintAction();

};

