#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "SettingsMenuSubView.generated.h"

class UMenuButtonModel;
class USettingsView;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API USettingsMenuSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USettingsView* SettingsView;
    
    UPROPERTY(EditDefaultsOnly)
    UMenuButtonModel* ElementButtonHoveredMenuButtonModel;
    
    UPROPERTY(EditDefaultsOnly)
    UMenuButtonModel* SubCategoryMenuButtonModel;
    
public:
    USettingsMenuSubView();

};

