#pragma once
#include "CoreMinimal.h"
#include "MenuButtonModel.h"
#include "ShortcutData.h"
#include "ModioLegendModel.generated.h"

UCLASS()
class STALKER2_API UModioLegendModel : public UMenuButtonModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FShortcutData> SubViewShortcutsRightSide;
    
public:
    UModioLegendModel();

};

