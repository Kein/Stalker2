#pragma once
#include "CoreMinimal.h"
#include "ModioLegendData.generated.h"

class UModioLegendModel;

USTRUCT(BlueprintType)
struct STALKER2_API FModioLegendData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UModioLegendModel* BrowseShortcutsModel;
    
    UPROPERTY(EditDefaultsOnly)
    UModioLegendModel* DetailsShortcutsModel;
    
    FModioLegendData();
};

