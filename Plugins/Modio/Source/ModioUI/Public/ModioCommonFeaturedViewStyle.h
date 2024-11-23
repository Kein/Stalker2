#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFeaturedViewStyle.generated.h"

class UModioCommonSearchResultsViewStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonFeaturedViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonSearchResultsViewStyle> SearchResultsViewStyle;
    
    UModioCommonFeaturedViewStyle();

};

