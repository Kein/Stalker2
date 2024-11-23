#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonGenericModEntryStyle.generated.h"

class UModioCommonGenericModEntryStateStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonGenericModEntryStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonGenericModEntryStateStyle> NormalStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonGenericModEntryStateStyle> SelectedStyle;
    
    UModioCommonGenericModEntryStyle();

};

