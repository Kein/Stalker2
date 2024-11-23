#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "CreditsSubView.generated.h"

class UCreditsWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCreditsSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCreditsWidget* CreditsWidget;
    
public:
    UCreditsSubView();

};

