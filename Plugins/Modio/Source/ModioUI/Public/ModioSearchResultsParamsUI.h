#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModCategoryParams.h"
#include "EModioCommonSearchViewType.h"
#include "ModioSearchResultsParamsUI.generated.h"

UCLASS(BlueprintType)
class MODIOUI_API UModioSearchResultsParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FModioModCategoryParams FilterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioCommonSearchViewType SearchType;
    
    UModioSearchResultsParamsUI();

};

