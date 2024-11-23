#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MenuButtonStateDefiner.generated.h"

class UMenuButtonActionBase;

UCLASS(Abstract, EditInlineNew)
class UMenuButtonStateDefiner : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMenuButtonActionBase* OverrideBlockedAction;
    
public:
    UMenuButtonStateDefiner();

};

