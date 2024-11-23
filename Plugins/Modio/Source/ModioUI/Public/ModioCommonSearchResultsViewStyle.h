#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonSearchResultsViewStyle.generated.h"

class UModioCommonButtonStyle;
class UModioCommonFilteredModListViewStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonSearchResultsViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonFilteredModListViewStyle> FilteredModListViewStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonTextStyle> KeywordsLabelTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonTextStyle> KeywordsDetailsTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonTextStyle> CategoriesLabelTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonButtonStyle> EditSearchButtonStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> FilterCounterTextStyle;
    
    UModioCommonSearchResultsViewStyle();

};

