#pragma once
#include "CoreMinimal.h"
#include "MenuMainViewBase.h"
#include "Templates/SubclassOf.h"
#include "MainMenuView.generated.h"

class UMenuSubViewBase;

UCLASS(EditInlineNew)
class STALKER2_API UMainMenuView : public UMenuMainViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UMenuSubViewBase> FirstTimeSettingsViewClass;
    
public:
    UMainMenuView();

};

