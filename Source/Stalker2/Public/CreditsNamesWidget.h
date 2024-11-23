#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NameDisplaySettings.h"
#include "Templates/SubclassOf.h"
#include "CreditsNamesWidget.generated.h"

class UCreditsName;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UCreditsNamesWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UVerticalBox* NamesVerticalBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCreditsName> CreditsNameClass;
    
    UPROPERTY(EditDefaultsOnly)
    FNameDisplaySettings NameDisplaySettings;
    
public:
    UCreditsNamesWidget();

};

