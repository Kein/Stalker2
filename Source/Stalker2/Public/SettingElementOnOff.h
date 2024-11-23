#pragma once
#include "CoreMinimal.h"
#include "SettingElement.h"
#include "SettingElementOnOff.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API USettingElementOnOff : public USettingElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    bool bDisableDependenciesWhenValueIs;
    
public:
    USettingElementOnOff();

};

