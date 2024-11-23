#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonProgressBarStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonProgressBarStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FProgressBarStyle Style;
    
    UModioCommonProgressBarStyle();

};

