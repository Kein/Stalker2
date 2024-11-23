#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "OpenModBrowser.generated.h"

class UMenuSubViewBase;

UCLASS(EditInlineNew)
class UOpenModBrowser : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMenuSubViewBase> ModBrowserDummyViewWidget;
    
public:
    UOpenModBrowser();

};

