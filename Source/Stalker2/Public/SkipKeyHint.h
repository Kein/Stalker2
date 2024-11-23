#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkipKeyHint.generated.h"

class UHintControllerBase;

UCLASS(EditInlineNew)
class STALKER2_API USkipKeyHint : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UHintControllerBase* InputController;
    
public:
    USkipKeyHint();

};

