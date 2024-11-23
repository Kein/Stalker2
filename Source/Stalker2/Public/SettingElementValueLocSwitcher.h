#pragma once
#include "CoreMinimal.h"
#include "SettingElement.h"
#include "ValueLocalisationPair.h"
#include "SettingElementValueLocSwitcher.generated.h"

UCLASS(Abstract, EditInlineNew)
class STALKER2_API USettingElementValueLocSwitcher : public USettingElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<FValueLocalisationPair> Values;
    
    UPROPERTY(EditInstanceOnly)
    int32 Index;
    
public:
    USettingElementValueLocSwitcher();

};

