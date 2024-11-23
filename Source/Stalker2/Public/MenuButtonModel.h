#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MenuButtonData.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "MenuButtonModel.generated.h"

class UHintControllerBase;

UCLASS()
class STALKER2_API UMenuButtonModel : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FMenuButtonData> ButtonDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UHintControllerBase> LegendButtonWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> SubViewShortcuts;
    
public:
    UMenuButtonModel();

};

