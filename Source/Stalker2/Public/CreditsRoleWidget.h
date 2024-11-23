#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NamesWidgetDisplaySettings.h"
#include "Templates/SubclassOf.h"
#include "CreditsRoleWidget.generated.h"

class UCreditsNamesWidget;
class UHorizontalBox;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCreditsRoleWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHorizontalBox* RoleHorizontalBox;
    
    UPROPERTY(Instanced)
    UTextWidget* RoleText;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCreditsNamesWidget> CreditsNamesClass;
    
    UPROPERTY(EditDefaultsOnly)
    FNamesWidgetDisplaySettings NamesDisplaySettings;
    
public:
    UCreditsRoleWidget();

};

